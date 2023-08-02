#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
	ListNode* reverseList(ListNode* head)
	{
		if (!head)
			return nullptr;

		ListNode *it = head->next;
		head->next = nullptr;

		while (it)
		{
			ListNode *tmp = it;
			it = it->next;
			tmp->next = head;
			head = tmp;
		}

		return head;
	}
};

#endif // SOLUTION_H