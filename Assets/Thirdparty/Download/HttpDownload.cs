using System.IO;
using System.Net;
using System.Threading;

public class HttpDownload
{
    public float progress { get; private set; }
    private Thread thread;
    public bool isStop;
    
    public void Download(string _url, string _host, string _fileDirectory)
    {
        isStop = false;
        thread = new Thread(delegate ()
        {
            try
            {
                if (!Directory.Exists(_fileDirectory))
                    Directory.CreateDirectory(_fileDirectory);
                string filePath = _fileDirectory + "/" + _url.Substring(_url.LastIndexOf('/') + 1);
                if (!File.Exists(filePath))
                    File.Create(filePath).Dispose();
                FileStream fileStream = new FileStream(filePath, FileMode.OpenOrCreate, FileAccess.Write);
                long fileLength = fileStream.Length;
                float totalLength = GetLength(_url, _host);

                if (fileLength < totalLength)
                {
                    HttpWebRequest request = (HttpWebRequest)HttpWebRequest.Create(_url);
                    request.AddRange((int)fileLength);
                    request.Host = _host;
                    request.ReadWriteTimeout = 5000;
                    HttpWebResponse response = (HttpWebResponse)request.GetResponse();
                    fileStream.Seek(fileLength, SeekOrigin.Begin);
                    Stream httpStream = response.GetResponseStream();
                    byte[] buffer = new byte[1024];
                    int length = httpStream.Read(buffer, 0, buffer.Length);
                    while (length > 0)
                    {
                        if (isStop)
                            break;
                        fileStream.Write(buffer, 0, length);
                        fileLength += length;
                        progress = fileLength/totalLength;
                        fileStream.Flush();
                        length = httpStream.Read(buffer, 0, buffer.Length);
                    }
                    httpStream.Close();
                    httpStream.Dispose();
                }
                else
                {
                    progress = fileLength/totalLength;
                }
                fileStream.Close();
                fileStream.Dispose();
            }
            catch
            {
                isStop = true;
            }
        });
        thread.IsBackground = true;
        thread.Start();
    }
    
    public void Close()
    {
        isStop = true;
    }

    long GetLength(string _fileUrl, string _host)
    {
        HttpWebRequest request = (HttpWebRequest)HttpWebRequest.Create(_fileUrl);
        request.Method = "HEAD";
        request.Host = _host;
        HttpWebResponse res = (HttpWebResponse)request.GetResponse();
        return res.ContentLength;
    }
}