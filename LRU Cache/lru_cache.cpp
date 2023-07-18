// #include "lru_cache.h"

// void LRUCache::put(int key, int value)
// {
//     if (m_capacity == 0)
//         return;

//     if (m_data.find(key) != m_data.end())
//     {
//         m_data[key] = value;
//         updateLRU(key);
//         return;
//     }

//     if (m_data.size() == m_capacity)
//     {
//         int idx = m_lru.back();
//         m_data.erase(idx);
//         m_data[key] = value;
//         updateLRU(key);
//         return;
//     }

//     m_data[key] = value;
//     updateLRU(key);
// }

// void LRUCache::updateLRU(int key)
// {
//     if (m_lru.size() == m_capacity)
//     {
//         m_lru.pop_back();
//         m_lru.push_front(key);
//     }
//     else m_lru.push_front(key);
// }