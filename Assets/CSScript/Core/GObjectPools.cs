using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;

namespace Game
{
    public class GObjectPools
    {
        private static GObjectPools _g_objectPools = null;

		public static GObjectPools GetInstance()
		{
			if (_g_objectPools == null)
			{
				_g_objectPools = new GObjectPools();
                _g_objectPools.Init();
			}

			return _g_objectPools;
		}

        public void Init()
        {
            GameObject go = new GameObject{name = "ObjectPools"};
            go.AddComponent<TrashMan>();
            Object.DontDestroyOnLoad(go);
        }

        //可以传prefab或者gameObject
        public void AddPrefabToPools(GameObject prefab, int preCreate, bool hasLimit)
        {
            var recycleBin = new TrashManRecycleBin()
            {
                prefab = prefab,
                instancesToPreallocate = preCreate,
                imposeHardLimit = hasLimit
            };
            
			TrashMan.manageRecycleBin(recycleBin);
            // TrashMan.recycleBinForGameObject(go).onSpawnedEvent += go => Debug.Log( "spawned object: " + go );
		    // TrashMan.recycleBinForGameObject(go).onDespawnedEvent += go => Debug.Log( "DEspawned object: " + go );
        }

        //可以传prefab或者gameObject
        public void RemovePrefabFromPools(GameObject prefab)
        {
            TrashMan.removeRecycleBinByPerfab(prefab);
        }

        //可以传prefab或者gameObject
        public GameObject Instantiate(GameObject prefab)
        {
            return TrashMan.spawn(prefab);
        }

        //必须为gameObject
        public void Destroy(GameObject go)
        {
            TrashMan.despawn(go);
        }

        public void Destroy(GameObject go, float dt)
        {
            TrashMan.despawnAfterDelay(go, dt);
        }
    }
}