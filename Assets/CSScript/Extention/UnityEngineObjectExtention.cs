﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using XLua;
using System;

[LuaCallCSharp]
[ReflectionUse]
public static class UnityEngineObjectExtention
{
    public static bool IsNull(this UnityEngine.Object o) // 或者名字叫IsDestroyed等等
    {
        return o == null;
    }
}
