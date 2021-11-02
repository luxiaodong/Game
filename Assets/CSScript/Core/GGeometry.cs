using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;
using XLua;

// 用于解析几何相关的函数调用.
namespace Game
{
	public class GGeometry
	{
		static public void Test()
		{
			Vector2 p1 = new Vector2(1,1);

			Vector3 line1 = CreateLineByTwoPoint(new Vector2(2,0), new Vector2(0,2));
			Vector3 line2 = CreateLineByTwoPoint(new Vector2(-2,0), new Vector2(0,2));
			Vector3 line3 = CreateLineByTwoPoint(new Vector2(-2,0), new Vector2(0,-2));
			Vector3 line4 = CreateLineByTwoPoint(new Vector2(2,0), new Vector2(0,-2));
			Vector3 line5 = CreateLineByTwoPoint(new Vector2(1,1), new Vector2(0,0));

			float distance1 = RelationshipBetweenLineAndPoint(line1, p1);
			float distance2 = RelationshipBetweenLineAndPoint(line2, p1);
			float distance3 = RelationshipBetweenLineAndPoint(line3, p1);
			float distance4 = RelationshipBetweenLineAndPoint(line4, p1);

			Debug.Log( RelationshipBetweenTwoLine(line1, line2) );
			Debug.Log( RelationshipBetweenTwoLine(line1, line3) );
			
			Vector3 line0 = new Vector3(0.3511f, 0.9363f, -6.0f);
			Vector2 p = CrossPointVerticalLine(line0, new Vector2(10.0f,20.0f));
			Debug.Log(p.ToString());
		}
		// 分四大类, 1.创建直线,平面. 2.点线面相互关系. 3.求距离. 4.求交点.

		// ======================= 2D function =======================
		// 直线表示: ax+by+c=0. (a,b)是单位外法向量,c必须是负数,-c是(0,0)点到平面的距离
		// 圆的表示: 圆点和半径

		//点法式
		static public Vector3 CreateLine(Vector2 n, Vector2 p)
		{
			n = n.normalized;
			float c = Vector2.Dot(n, p);
			if (c > 0)
			{
				return new Vector3(n.x, n.y, -c);
			}
			
			return new Vector3(-n.x, -n.y, c);
		}

		//点斜式
		static public Vector3 CreateLineByRay(Vector2 v, Vector2 p)
		{
			return CreateLine(new Vector3(v.y, -v.x), p);
		}
		
		//2点式
		static public Vector3 CreateLineByTwoPoint(Vector2 p1, Vector2 p2)
		{
			return CreateLineByRay(p1 - p2, p1);
		}

		static private float SignedDistanceBetweenLineAndPoint(Vector3 line, Vector2 p)
		{
			Vector2 n = line;
			return (Vector2.Dot(n, p) + line.z)/n.magnitude;
		}

		//点到直线距离.
		static public float DistanceBetweenLineAndPoint(Vector3 line, Vector2 p)
		{
			return Math.Abs(SignedDistanceBetweenLineAndPoint(line, p));
		}

		//点与直线的关系. 下面,里面,上面 (-1,0,1)
		static public int RelationshipBetweenLineAndPoint(Vector3 line, Vector2 p)
		{
			return Sign(SignedDistanceBetweenLineAndPoint(line, p));
		}

		//直线与直线的关系. 平行,相交 (0,1)
		static public int RelationshipBetweenTwoLine(Vector3 line1, Vector3 line2)
		{
			return Sign(Determinant2D(line1, line2)) == 0 ? 0 : 1;
		}

		//计算两直线的交点
		static public Vector2 CrossPointByTwoLine(Vector3 line1, Vector3 line2)
		{
			float d = Determinant2D(line1, line2);
			float x = Determinant2D(line1.y, line2.y, line1.z, line2.z)/d;
			float y = Determinant2D(line2.x, line1.x, line2.z, line1.z)/d;
			return new Vector2(x, y);
		}

		//垂直与直线的交点
		static public Vector2 CrossPointVerticalLine(Vector3 line, Vector2 p)
		{
			return CrossPointByTwoLine(line, CreateLineByRay(line, p));
		}

		// 创建圆, 三个点
		static public Vector3 CreateCircleByThreePoint(Vector2 p1, Vector2 p2, Vector2 p3)
		{
			return new Vector3(0,0,1);
		}

		// 圆心和半径
		static public Vector3 CreateCircle(Vector2 c, float r)
		{
			return new Vector3(c.x, c.y, r);
		}

		//是否在圆内
		static public bool IsInCircle(Vector3 circle, Vector2 p)
		{
			return IsInCircle(circle, circle.z, p);
		}

		static public bool IsInCircle(Vector2 c, float r, Vector2 p)
		{
			return (p - c).sqrMagnitude < r*r;
		}

		//里面,圆上,圆外 (-1,0,1)
		static int RelationshipBetweenCircleAndPoint(Vector2 c, float r, Vector2 p)
		{
			return Sign((p - c).magnitude - r);
		}

		//相交,相切,没有交点 (-1,0,1)
		static int RelationshipBetweenCircleAndLine(Vector2 c, float r, Vector3 line)
		{
			return Sign(DistanceBetweenLineAndPoint(line, c) - r);
		}

		//圆与直线的交点
		//index 0.表示切点, 1.第一个交点, 2.第二个交点
		static Vector2 CrossPointBetweenCircleAndLine(Vector2 c, float r, Vector3 line, int index)
		{
			Vector2 crossPoint = CrossPointVerticalLine(line, c);
			if(index == 0) return crossPoint;
			float d = (crossPoint - c).magnitude;
			float m = (float)Math.Sqrt(r*r - d*d);
			Vector2 dir = new Vector2(line.y, -line.x)*m;
			float s = (index == 1) ? 1.0f : -1.0f;
			return crossPoint + dir*s;
		}

		// ======================= 3D function =======================
		// 平面表示: ax+by+cz+d=0,(a,b,c)是单位外法向量,d必须是负数,-d是(0,0,0)点到平面的距离
		// 直线表示: 一个点和一个向量,两个Vector3, 注:没有法向量概念
		// 圆的表示: 圆点和半径

		// 法向量+点
		static public Vector4 CreatePlane(Vector3 n, Vector3 p)
		{
			n = n.normalized;
			float d = Vector3.Dot(n, p);
			if (d > 0)
			{
				return new Vector4(n.x, n.y, n.z, -d);
			}
			
			return new Vector4(-n.x, -n.y, -n.z, d);
		}

		// 两个向量+点
		static public Vector4 CreatePlane(Vector3 v1, Vector3 v2, Vector3 p)
		{
			return CreatePlane(Vector3.Cross(v1, v2), p);
		}

		// 直线和点创建
		static public Vector4 CreatePlaneByLineAndPoint(Vector3 p0, Vector3 dir, Vector3 p1)
		{
			return CreatePlane(dir, p1 - p0, p1);
		}

		// 三个点
		static public Vector4 CreatePlaneByThreePoint(Vector3 p1, Vector3 p2, Vector3 p3)
		{
			return CreatePlane(p1 - p2, p1 - p3, p1);
		}

		//点与直线的关系. 属于,不属于(0,1)
		static public int RelationshipBetweenLineAndPoint(Vector3 p0, Vector3 dir, Vector3 p1)
		{
			return Sign(Determinant3D(p0, p1, p0 + dir)) == 0 ? 0 : 1;
		}

		//直线和平面的关系, 属于,不属于(0,1)
		static public int RelationshipBetweenPlaneAndline(Vector4 plane, Vector3 p0, Vector3 dir)
		{
			return Sign(Vector3.Dot(plane, dir)) == 0 ? 0 : 1;
		}

		//点与平面的关系.下面,里面,上面 (-1,0,1)
		static public int RelationshipBetweenPlaneAndPoint(Vector4 plane, Vector3 p)
		{
			return Sign(SignedDistanceBetweenPlaneAndPoint(plane, p));
		}

		//直线和直线的关系
		//平面和平面的关系

		static private float SignedDistanceBetweenPlaneAndPoint(Vector4 plane, Vector3 p)
		{
			Vector3 n = plane;
			return (Vector3.Dot(n, p) + plane.w)/n.magnitude;
		}

		//点到平面的距离
		//直线到平面的关系可以转成点到平面的距离
		static public float DistanceBetweenPlaneAndPoint(Vector4 plane, Vector3 p)
		{
			return Math.Abs(SignedDistanceBetweenPlaneAndPoint(plane, p));
		}

		//点到直线距离
		static public float DistanceBetweenLineAndPoint(Vector3 p0, Vector3 dir, Vector3 p1)
		{
			Vector3 n = Vector3.Cross(dir, Vector3.Cross(p1 - p0, dir));
			Vector4 plane = CreatePlane(n, p0);
			float dis = DistanceBetweenPlaneAndPoint(plane, p1);
			return Math.Abs(dis);
		}

		//平面和直线的交点
		static public Vector3 CrossPointBetweenPlaneAndLine(Vector4 plane, Vector3 p0, Vector3 dir)
		{
			Vector3 n = plane;
			float t = (plane.z + Vector3.Dot(p0, n))/(Vector3.Dot(dir, n));
			return p0 + t*dir;
		}

		//垂直与直线的交点
		static public Vector3 CrossPointVerticalLine(Vector3 p0, Vector3 dir, Vector3 p1)
		{
			Vector3 n = Vector3.Cross(dir, Vector3.Cross(p1 - p0, dir));
			Vector4 plane = CreatePlane(n, p0);
			return CrossPointBetweenPlaneAndLine(plane, p1, n);
		}

		//两个平面的交线
		//三个平面的交点

		// 是否在球内
		static bool IsInSphere(Vector3 c, float r, Vector3 p)
		{
			return (p - c).sqrMagnitude < r*r;
		}

		// ======================= 辅助函数 =======================
		// 符号化
		static public int Sign(float value)
		{
			if (value < -0.0001){
				return -1;
			}
			else if(value > 0.0001){
				return 1;
			}

			return 0;
		}

		static public float Determinant2D(Vector2 v1, Vector2 v2)
		{
			return Determinant2D(v1.x, v1.y, v2.x, v2.y);
		}

		// |a b|
		// |c d|
		static public float Determinant2D(float a, float b, float c, float d)
		{
			return a*d - b*c;
		}

		// |a1 b1 c1|
		// |a2 b2 c2|
		// |a3 b3 c3|
		static public float Determinant3D(Vector3 a, Vector3 b, Vector3 c)
		{
			return a.x*b.y*c.z + b.x*c.y*a.z + c.x*a.y*b.z - c.x*b.y*a.z - b.x*a.y*c.z - a.x*c.y*b.z;
		}
	}
}
