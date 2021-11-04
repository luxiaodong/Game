using UnityEngine;
using System.IO;

public class FittingPlaneByRGB : MonoBehaviour {

	static int baseColorId = Shader.PropertyToID("_BaseColor");

	[SerializeField]
	Mesh mesh = default;

	[SerializeField]
	Material material = default;

	[SerializeField]
	Texture2D texture = default;

	public float scale = 255f;
	int count = 0;
	int singleDrawCount = 0;
	int totalDrawCount = 0;

	Matrix4x4[][] matrices;
	Vector4[][] baseColors;

	MaterialPropertyBlock[] block;

	void Awake ()
	{
		if (texture.IsNull())
		{
			return;
		}

		singleDrawCount = 1023;
		count = texture.width * texture.height;
		totalDrawCount = count / singleDrawCount;

		if (count % singleDrawCount > 0)
		{
			totalDrawCount++;
		}

		matrices = new Matrix4x4[totalDrawCount][];
		baseColors = new Vector4[totalDrawCount][];
		for (int j = 0; j < totalDrawCount - 1; ++j)
		{
			matrices[j] = new Matrix4x4[singleDrawCount];
			baseColors[j] = new Vector4[singleDrawCount];
		}

		matrices[totalDrawCount - 1] = new Matrix4x4[count - singleDrawCount * (totalDrawCount - 1)];
		baseColors[totalDrawCount - 1] = new Vector4[count - singleDrawCount * (totalDrawCount - 1)];

		var colors = texture.GetPixels();
		for (int index = 0; index < count; ++index)
		{
			Color c = colors[index];
			int i = index % singleDrawCount;
			int j = index / singleDrawCount;

			matrices[j][i] = Matrix4x4.TRS(
				new Vector3(c.r, c.g, c.b) * scale,
				Quaternion.Euler(0, 0, 0),
				Vector3.one * 0.5f
			);

			baseColors[j][i] = new Vector4(c.r, c.g, c.b, 1.0f);
		}

        block = new MaterialPropertyBlock[totalDrawCount];
        for (int j = 0; j < totalDrawCount; ++j)
        {
			block[j] = new MaterialPropertyBlock();
			block[j].SetVectorArray(baseColorId, baseColors[j]);
		}
    }

    void Start()
    {
		if (texture.IsNull())
		{
			return;
		}

		count = texture.width * texture.height;
		var colors = texture.GetPixels();
		var outColors = texture.GetPixels();

		// convert color to point
		Vector3 centerPt = Vector3.zero;
		var points = new Vector3[count];
		for (int j = 0; j < texture.height; ++j)
		{
			for (int i = 0; i < texture.width; ++i)
			{
				int index = j * texture.width + i;
				Color c = colors[index];
				points[index] = new Vector3(c.r, c.g, c.b);
				centerPt += new Vector3(c.r, c.g, c.b);
			}
		}

		centerPt /= count;
		Vector3 normalDir = CalculatePlaneDir(points, centerPt);

		for (int i = 0; i < count; ++i)
		{
			Color c = colors[i];
			Vector3 srcPt = new Vector3(c.r, c.g, c.b);
			float dis = Vector3.Dot(srcPt - centerPt, normalDir);
			Vector3 dstPt = srcPt - dis * normalDir;
			float z = -((dstPt.x - centerPt.x) * normalDir.x + (dstPt.y - centerPt.y) * normalDir.y) / normalDir.z + centerPt.z;
			c.b = z;
			outColors[i] = c;
		}

		// texture
		var compressedTex = new Texture2D(texture.width, texture.height, TextureFormat.RGB24, false);
		compressedTex.SetPixels(outColors);
		compressedTex.Apply();
		File.WriteAllBytes(@"/Users/luxiaodong/Desktop/temp.tga", compressedTex.EncodeToTGA());
	}

	Vector3 CalculatePlaneDir(Vector3[] points, Vector3 centerPt)
	{
		Vector3 normalDir = Vector3.zero;

		// calc full 3x3 matrix
		float xx = 0.0f;
		float yy = 0.0f;
		float zz = 0.0f;
		float xy = 0.0f;
		float xz = 0.0f;
		float yz = 0.0f;

		foreach (var p in points)
		{
			var r = p - centerPt;
			xx += r.x * r.x;
			yy += r.y * r.y;
			zz += r.z * r.z;
			xy += r.x * r.y;
			xz += r.x * r.z;
			yz += r.y * r.z;
		}

		var det_x = yy * zz - yz * yz;
		var det_y = xx * zz - xz * xz;
		var det_z = xx * yy - xy * xy;
		var det_max = Mathf.Max(det_x, det_y, det_z);
		if (det_max <= 0.0) return Vector3.zero;

		if (det_max == det_x) normalDir = new Vector3(det_x, xz * yz - xy * zz, xy * yz - xz * yy);
		if (det_max == det_y) normalDir = new Vector3(xz * yz - xy * zz, det_y, xy * xz - yz * xx);
		if (det_max == det_z) normalDir = new Vector3(xy * yz - xz * yy, xy * xz - yz * xx, det_z);

		return normalDir.normalized;
	}

	// 这里是一个物体
	void Update ()
	{
		if (texture.IsNull())
		{
			return;
		}

		for (int j = 0; j < totalDrawCount - 1; ++j)
        {
            Graphics.DrawMeshInstanced(mesh, 0, material, matrices[j], singleDrawCount, block[j]);
        }

		Graphics.DrawMeshInstanced(mesh, 0, material, matrices[totalDrawCount - 1], count - singleDrawCount * (totalDrawCount - 1), block[totalDrawCount - 1]);
	}
}
