using UnityEngine;
using System.Collections.Generic;
using UnityHTTP;
using XLua;

namespace Game
{
	public class GHttp
	{
		private UnityHTTP.Request m_request = null;

		public void Create(string url, string method = "GET", string postData = "")
		{
			m_request = new UnityHTTP.Request(method, url, postData);
		}

		public void SetConnectTimeout(int t)
		{
			m_request.SetConnectTimeout(t);
		}

		public void SetHeader(string key, string value)
		{
			m_request.AddHeader(key, value);
		}

		public void Send(LuaFunction callback = null)
		{
			m_request.Send((request) => 
			{
				if ( null != callback)
            	{
					if(request.response != null)
					{
						callback.Call(request.response.status, request.response.Text);
					}
                	else
					{
						callback.Call(0, "");
					}
            	}
			});
		}
	}
}

