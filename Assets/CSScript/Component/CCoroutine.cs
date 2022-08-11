using System;
using UnityEngine;
using System.Collections;
using XLua;

namespace Game
{
    public class CCoroutine : MonoBehaviour {

        private IEnumerator CoroutineBody(object to_yield, Action callback)
        {
            if (to_yield is IEnumerator)
                yield return StartCoroutine((IEnumerator)to_yield);
            else
                yield return to_yield;
            callback();
        }

        public void YieldAndCallback(object to_yield, Action callback)
        {
            StartCoroutine(CoroutineBody(to_yield, callback));
        }
    }
}
