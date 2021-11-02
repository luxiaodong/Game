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
using System.Threading;

namespace Game
{
    public class GZipUtils
    {
        public float progress { get; private set; }
        private Thread thread;

        public float Percentage()
        {
            return progress;
        }

        //tcp解压缩用
        public byte[] UnzipByte(byte[] inByte)
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
			}
            catch //(Exception e)
			{
				//return Encoding.UTF8.GetBytes(e.ToString());
                return null;
			}
		}

        //动更逻辑用
        public void UnzipFileThread(string zipFilePath, string outFolder)
        {
            thread = new Thread(delegate ()
            {
                UnzipFile(zipFilePath, "", outFolder);
            });
            thread.IsBackground = true;
            thread.Start();
        }

        //要写在线程里面.
        public void UnzipFile(string archiveFilenameIn, string password, string outFolder)
        {
            ZipConstants.DefaultCodePage = 0;
            ZipFile zf = null;
            try {
                FileStream fs = File.OpenRead(archiveFilenameIn);
                zf = new ZipFile(fs);
                if (!string.IsNullOrEmpty(password)) {
                    zf.Password = password;		// AES encrypted entries are handled automatically
                }

                int i = 0;
                foreach (ZipEntry zipEntry in zf) 
                {
                    i++;
                    if (!zipEntry.IsFile) {
                        continue;			// Ignore directories
                    }
                    string entryFileName = zipEntry.Name;
                    // to remove the folder from the entry:- entryFileName = Path.GetFileName(entryFileName);
                    // Optionally match entrynames against a selection list here to skip as desired.
                    // The unpacked length is available in the zipEntry.Size property.

                    byte[] buffer = new byte[4096];		// 4K is optimum
                    Stream zipStream = zf.GetInputStream(zipEntry);

                    // Manipulate the output filename here as desired.
                    string fullZipToPath = Path.Combine(outFolder, entryFileName);
                    string directoryName = Path.GetDirectoryName(fullZipToPath);
                    if (directoryName.Length > 0)
                        Directory.CreateDirectory(directoryName);

                    // Unzip file in buffered chunks. This is just as fast as unpacking to a buffer the full size
                    // of the file, but does not waste memory.
                    // The "using" will close the stream even if an exception occurs.
                    using (FileStream streamWriter = File.Create(fullZipToPath)) {
                        StreamUtils.Copy(zipStream, streamWriter, buffer);
                    }

                    progress = i*1.0f/zf.Count;
                }
            } finally {
                if (zf != null) {
                    zf.IsStreamOwner = true; // Makes close also shut the underlying stream
                    zf.Close(); // Ensure we release resources
                }
            }
        }
    }
}