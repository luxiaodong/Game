using UnityEngine;
using XLua;
using HiSocket;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Globalization;
using ICSharpCode.SharpZipLib.Zip.Compression;
using System.Threading;

namespace Game
{
	struct protocolData 
    { 
        public string m_cmd; 
        public string m_content; 
        public int m_requestId; 
    }

	public class GTcp
	{
		private TcpConnection m_tcp;
		private LuaFunction m_luaUpdate;
		private List<protocolData> m_protocol;
		private System.Object m_lockObject = new System.Object();
		private bool m_isCompress = false;
		private bool m_isCluster = true;

        public GTcp()
		{
			Package package = new Package();
            m_tcp = new TcpConnection(package);
			m_protocol = new List<protocolData>();
		}

		public void OnUpdate()
		{
			if( IsConnected() && (null != m_luaUpdate))
			{
				lock(m_lockObject)
				{
					foreach (protocolData data in m_protocol)
					{
						m_luaUpdate.Call(data.m_requestId, data.m_cmd, data.m_content);
					}

					m_protocol.Clear();					
				}
			}
		}

		public void Connect(string ip, int port, int timeout)
		{
            m_tcp.OnReceive += OnReceive;
			m_tcp.OnConnected += OnConnected;
			m_tcp.OnDisconnected += OnDisconnect;
			
			if (m_tcp.Connect(ip, port) )
			{
				Timer.Register(0, this.OnUpdate, isLooped: true);
				Timer.Register(timeout, this.OnTimeout);
			}
			else
			{
				if(null != m_luaUpdate)
				{
					m_luaUpdate.Call(0,"","{\"state\":101,\"data\":{\"state\":0}}");
				}
			}
		}

		public void RegisterLuaUpdate(LuaFunction func)
		{
			m_luaUpdate = func;
		}

		public void UnregisterLuaUpdate()
		{
			m_luaUpdate = null;
		}

		public bool IsConnected()
		{
			return m_tcp.IsConnected;
		}

		public void Disconnect()
        {
            m_tcp.DisConnect();
        }

        public void Send(int serviceType,int serviceId, string cmd, string content, int requestId)
        {
			if( IsConnected() )
			{
#if UNITY_EDITOR
	Debug.Log("GTcp send: " + cmd + "," + content + "," + serviceType + "," + serviceId);
#endif
				if(m_isCluster)
				{
					byte packageType = 1;
					// byte data1 = packageType;
					byte[] data2 = BitConverter.GetBytes(serviceType);
					byte[] data3 = BitConverter.GetBytes(serviceId);
					byte[] data4 = Encoding.UTF8.GetBytes(cmd);
					byte[] data5 = BitConverter.GetBytes(requestId);
					byte[] data6 = Encoding.UTF8.GetBytes(content);
					if (BitConverter.IsLittleEndian) //小端转大端
					{
						Array.Reverse(data2);
						Array.Reverse(data3);
						Array.Reverse(data5);
					}

					byte[] data = new byte[45 + data6.Length];
					//data1.CopyTo(data, 0);
					data[0] = packageType;
					data2.CopyTo(data, 1);
					data3.CopyTo(data, 5);
					data4.CopyTo(data, 9);
					data5.CopyTo(data, 41);
					data6.CopyTo(data, 45);
					m_tcp.Send(data);
				}
				else
				{
					byte[] data1 = Encoding.UTF8.GetBytes(cmd);
					byte[] data2 = BitConverter.GetBytes(requestId);
					byte[] data3 = Encoding.UTF8.GetBytes(content);
					if (BitConverter.IsLittleEndian) //小端转大端
					{
						Array.Reverse(data2);
					}
					
					byte[] data = new byte[36 + data3.Length];
					data1.CopyTo(data, 0);
					data2.CopyTo(data, 32);
					data3.CopyTo(data, 36);
					m_tcp.Send(data);
				}
			}
			else
			{
				Debug.Log("send error, tcp is disconnected. ");	
			}
			//Debug.Log("send thread is " + Thread.CurrentThread.ManagedThreadId.ToString());
        }

        void OnReceive(byte[] bytes)
        {
        	Debug.Log("GTcp OnReceive " + bytes.Length);
			//Debug.Log("receive thread is " + Thread.CurrentThread.ManagedThreadId.ToString());
        	protocolData protocol = new protocolData();

        	if(m_isCluster)
        	{
				byte[] data1 = new byte[32];
				byte[] data2 = new byte[4];
				byte[] data3 = new byte[bytes.Length - 37];
				Array.Copy(bytes,  1, data1, 0, 32);
				Array.Copy(bytes, 33, data2, 0, 4);
				Array.Reverse(data2);//大端转小端
				Array.Copy(bytes, 37, data3, 0, bytes.Length - 37);

        		protocol.m_cmd = Encoding.UTF8.GetString(data1).Trim('\0');
				protocol.m_requestId = BitConverter.ToInt32(data2, 0);
				if(m_isCompress)
				{
					protocol.m_content = Encoding.UTF8.GetString(UnZip(data3));
				}
				else
				{
					protocol.m_content = Encoding.UTF8.GetString(data3).Trim('\0');
				}
        	}
        	else
        	{
        		byte[] data1 = new byte[32];
				byte[] data2 = new byte[4];
				byte[] data3 = new byte[bytes.Length - 36];
				Array.Copy(bytes,  0, data1, 0, 32);
				Array.Copy(bytes, 32, data2, 0, 4);
				Array.Reverse(data2);//大端转小端
				Array.Copy(bytes, 36, data3, 0, bytes.Length - 36);

        		protocol.m_cmd = Encoding.UTF8.GetString(data1).Trim('\0');
				protocol.m_requestId = BitConverter.ToInt32(data2, 0);
				if(m_isCompress)
				{
					protocol.m_content = Encoding.UTF8.GetString(UnZip(data3));
				}
				else
				{
					protocol.m_content = Encoding.UTF8.GetString(data3).Trim('\0');
				}
        	}

        	lock(m_lockObject)
			{
				m_protocol.Add(protocol);
			}
        }

		void OnConnected()
		{
			protocolData protocol = new protocolData();
			protocol.m_cmd = "";
			protocol.m_requestId = 0;
			protocol.m_content = "{\"state\":101,\"data\":{\"state\":1}}";

			lock(m_lockObject)
			{
				m_protocol.Add(protocol);
			}
		}

        void OnDisconnect()
        {
			//Debug.Log("tcp is onDisconnect");
			protocolData protocol = new protocolData();
			protocol.m_cmd = "";
			protocol.m_requestId = 0;
			protocol.m_content = "{\"state\":101,\"data\":{\"state\":2}}";

			lock(m_lockObject)
			{
				m_protocol.Add(protocol);
			}
        }

        void OnConnecting()
        {
			Debug.Log("OnConnecting");
        }

		void OnTimeout()
		{
			if( !IsConnected() )
			{
				if(null != m_luaUpdate)
				{
					m_luaUpdate.Call(0,"","{\"state\":101,\"data\":{\"state\":3}}");
				}
			}
		}

 		public byte[] UnZip(byte[] inByte)
		{
			try{
				using (MemoryStream outStream = new MemoryStream())
				{
					Inflater zip = new Inflater();
					zip.SetInput(inByte);
					byte[] buffer = new byte[1024];
					while(!zip.IsFinished)
					{
						int len = zip.Inflate(buffer);
						if(len == 0) break;
						outStream.Write(buffer,0,len);
					}

					return outStream.ToArray(); 
				}
			}catch(Exception e)
			{
				return Encoding.UTF8.GetBytes(e.ToString());
			}
		}
	}
}

