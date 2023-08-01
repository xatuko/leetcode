#ifndef _LRU_CACHE_H_
#define _LRU_CACHE_H_

#include <iostream>
#include <unordered_map>
#include <deque>

struct lru_t
{
    int val;
    lru_t* next;
    lru_t* prev;

    lru_t(int v) : val{v}, next{nullptr}, prev{nullptr} { }
};

class LRUCache {
    int m_capacity { 0 };
    std::unordered_map<int, std::pair<int,lru_t*>> m_data;

    lru_t* head;
    lru_t* end;

    void updateLRU(int key)
    {
        auto pos = m_data[key].second;

        if (pos == end) return;

        if (pos == head)
        {
            auto tmp = head;
            head = head->next;
            head->prev = nullptr;
            tmp->next = nullptr;
            tmp->prev = end;
            end->next = tmp;
            end = tmp;
            return;
        }

        pos->prev->next = pos->next;
        pos->next->prev = pos->prev;
        pos->next = nullptr;
        pos->prev = end;
        end->next = pos;
        end = pos;
    }

public:
    LRUCache(int capacity) : m_capacity(capacity) {
    }

    int get(int key) {
        if (m_data.find(key) == m_data.end())
            return -1;

        if (m_data.size() > 1)
            updateLRU(key);

        return m_data[key].first;
    }

    void put(int key, int value)
    {
        if (m_capacity == 0) return;

        if (m_data.find(key) != m_data.end())
        {
            updateLRU(key);
            m_data[key] = {value, end};
            return;
        }

        if (m_data.size() == 0)
        {
            head = new lru_t(key);
            end = head;
            m_data[key] = {value, end};
            return;
        }

        if (m_data.size() < m_capacity)
        {
            lru_t* tmp = new lru_t(key);
            tmp->prev = end;
            end->next = tmp;
            end = tmp;
            m_data[key] = {value, end};
            return;
        }

        lru_t* tmp = new lru_t(key);
        tmp->prev = end;
        end->next = tmp;
        end = tmp;

        auto todel = head;
        head = head->next;
        head->prev = nullptr;
        m_data.erase(todel->val);
        delete todel;
        m_data[key] = {value, end};
    }
};

#endif // _LRU_CACHE_H_