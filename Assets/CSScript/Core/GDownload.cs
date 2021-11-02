using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.IO;
using System.Text;
using ICSharpCode.SharpZipLib.Core;
using ICSharpCode.SharpZipLib.BZip2;
using ICSharpCode.SharpZipLib.Zip;
using ICSharpCode.SharpZipLib.Zip.Compression;
using ICSharpCode.SharpZipLib.Zip.Compression.Streams;
using ICSharpCode.SharpZipLib.GZip;
using ICSharpCode.SharpZipLib.Checksums;

namespace Game
{
    public class GDownload
    {
        private string m_url;
        private string m_host;
        private string m_fileName;
        private HttpDownload m_httpDownload = new HttpDownload();

        public void Start(string url, string host, string fileName)
        {
            m_url = url;
            m_host = host;
            m_fileName = fileName;
            Restart();
        }

        public void Restart()
        {
            m_httpDownload.Download(m_url, m_host, m_fileName);
        }

        //下载线程是否活着.
        public bool IsAlive()
        {
            return (m_httpDownload.isStop == false);
        }

        public void Stop()
        {
            m_httpDownload.Close();
        }

        public float Percentage()
        {
            return m_httpDownload.progress;
        }

        //需要支持回调.

        // public long fileRemoteSize()
        // {
        //     return httpDownload.GetLength(m_url);
        // }

        // public long fileLocalSize()
        // {
        //     return 0;
        // }
    }
}