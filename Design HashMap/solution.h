#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using namespace std;

struct element_t
{
	int key;
	int val;
	element_t* next;
	element_t(int k, int v) : key{k}, val{v}, next{nullptr} { }
	element_t(int k, int v, element_t* n) : key{k}, val{v}, next{n} { }
};

class MyHashMap {
private:
	vector<element_t*> m_map;
	size_t m_capacity { 100 };
public:
	MyHashMap() {
		m_map.resize(m_capacity, nullptr);
	}

	void put(int key, int value) {
		int hash = key % m_capacity;
		if (m_map[hash] != nullptr)
		{
			element_t* head = m_map[hash];
			if (head->key == key)
			{
				head->val = value;
				return;
			}
			while (head->next)
			{
				if (head->next->key == key)
				{
					head->next->val = value;
					return;
				}

				head = head->next;
			}
			head->next = new element_t(key, value);
		}
		else
			m_map[hash] = new element_t(key, value);
	}

	int get(int key) {
		int hash = key % m_capacity;
		if (!m_map[hash]) return -1;

		element_t* head = m_map[hash];
		while (head)
		{
			if (head->key == key) return head->val;
			head = head->next;
		}
		return -1;
	}

	void remove(int key) {
		int hash = key % m_capacity;
		if (!m_map[hash]) return;
		element_t* head = m_map[hash];
		if (head->key == key)
		{
			m_map[hash] = head->next;
			delete head;
			return;
		}

		while (head->next)
		{
			if (head->next->key == key)
			{
				element_t* tmp = head->next;
				head->next = head->next->next;
				delete tmp;
				return;
			}
			head = head->next;
		}
	}
};

#endif // SOLUTION_H