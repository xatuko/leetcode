#ifndef _LRU_CACHE_H_
#define _LRU_CACHE_H_

#include <iostream>
#include <unordered_map>
#include <deque>

class LRUCache {
    int m_capacity { 0 };
    std::unordered_map<int, int> m_data;
    std::deque<int> m_lru;

    void printcache()
    {
        for (auto & [k, v] : m_data)
        {
            std::cout << k << "," << v << "; ";
        }
        std::cout << "\t| ";
        for (auto & el : m_lru)
            std::cout << el << ",";
        std::cout << std::endl;
    }

    void updateLRU(int key)
    {
        if (m_lru.size() == m_capacity)
            m_lru.pop_back();
        m_lru.push_front(key);
    }

public:
    LRUCache(int capacity) : m_capacity(capacity) {
    }

    int get(int key) {
        if (m_data.find(key) == m_data.end())
            return -1;
        updateLRU(key);
        return m_data[key];
    }

    void put(int key, int value)
    {
        if (m_capacity == 0)
            return;

        if (m_data.find(key) != m_data.end() || m_data.size() < m_capacity)
        {
            m_data[key] = value;
            updateLRU(key);
            return;
        }

        while (m_data.find(m_lru.back()) == m_data.end())
            m_lru.pop_back();
        if (m_lru.size() > 0)
        {
            m_data.erase(m_lru.back());
            m_lru.pop_back();
            m_lru.push_front(key);
        }
        else m_lru.push_front(key);
        m_data[key] = value;
    }
};

#endif // _LRU_CACHE_H_