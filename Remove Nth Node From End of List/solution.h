#ifndef SOLUTION_H
#define SOLUTION_H

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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (!head) return head;

		ListNode* prev = nullptr;
		ListNode* to_del = head;
		ListNode* end = head;

		while (n && end)
		{
			end = end->next;
			n--;
		}

		while (end)
		{
			prev = to_del;
			to_del = to_del->next;
			end = end->next;
		}

		if (!prev)
		{
			head = head->next;
			delete to_del;
			return head;
		}

		prev->next = to_del->next;
		delete to_del;

		return head;
	}
};

#endif // SOLUTION_H