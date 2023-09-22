#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_set>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head)
	{
		if (!head || !head->next) return false;

		ListNode* fast = head->next;

		while (fast && head)
		{
			if (fast == head) return true;

			head = head->next;

			if (fast->next && fast->next->next)
				fast = fast->next->next;
			else return false;

		}
		return false;
	}
};

#endif // SOLUTION_H