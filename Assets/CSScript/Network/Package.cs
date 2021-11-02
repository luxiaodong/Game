/***************************************************************
 * Description: Split byte stream, also you can do encription or zip/unzip here
 *
 * Documents: https://github.com/hiramtan/HiSocket
 * Author: hiramtan@live.com
***************************************************************/

using HiSocket;
using System;

namespace Game
{
    public class Package : IPackage
    {  
        public void Unpack(IByteArray source, Action<byte[]> unpackedHandler)
        {
            // Unpack your message(use int, 4 byte as head)
            while (source.Length >= 4)
            {
                var head = source.Read(4);
                if(BitConverter.IsLittleEndian) {Array.Reverse(head);} //大端转小端
                int bodyLength = BitConverter.ToInt32(head, 0);// get body's length
                if (source.Length >= bodyLength)
                {
                    var unpacked = source.Read(bodyLength);// get body
                    unpackedHandler(unpacked);
                }
                else
                {
                    if(BitConverter.IsLittleEndian) {Array.Reverse(head);} //小端转大端
                    source.Insert(0, head);// rewrite in, used for next time
                    break;
                }
            }
        }
        
        public void Pack(IByteArray source, Action<byte[]> packedHandler)
        {
            // Add head length to your message(use int, 4 byte as head)
            var length = source.Length;
            var head = BitConverter.GetBytes(length);
            if (BitConverter.IsLittleEndian) Array.Reverse(head); //小端转大端
            source.Insert(0, head);// add head bytes
            var packed = source.Read(source.Length);
            packedHandler(packed);
        }
    }
}
