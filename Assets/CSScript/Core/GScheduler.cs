using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;
using XLua;

namespace Game
{
	public class GScheduler 
	{
		static public Timer DelayCall(float t, LuaFunction call, bool usesRealTime)
		{
			return Timer.Register(t, () => {
				if(null != call)
				{
					call.Call();
				}
			}, null, false, usesRealTime);
		}

		static public Timer LoopCall(float t, LuaFunction call, bool usesRealTime)
		{
			return Timer.Register(t, () => {
				if(null != call)
				{
					call.Call();
				}
			}, null, true, usesRealTime);
		}

		static public Timer FrameCall(LuaFunction call, bool usesRealTime)
		{
			return Timer.Register(1, null, (float dt) => {
				if(null != call)
				{
					call.Call(dt);
				}
			}, true, usesRealTime);
		}

		static public void Pause(Timer t)
		{
			t.Pause();
		}

		static public void Resume(Timer t)
		{
			t.Resume();
		}

		static public void StopLoop(Timer t)
		{
			t.Cancel();
		}

		static public void StopAllTimer()
		{
			Timer.CancelAllRegisteredTimers();
		}
	}
}
