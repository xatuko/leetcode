#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_set>

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode* iA = headA;
		ListNode* iB = headB;

		size_t sizeA = 0;
		size_t sizeB = 0;

		while (iA)
		{
			sizeA++;
			iA = iA->next;
		}
		iA = headA;

		while (iB)
		{
			sizeB++;
			iB = iB->next;
		}
		iB = headB;

		if (sizeA > sizeB) for (size_t i = 0; i < (sizeA-sizeB); i++) iA = iA->next;
		else for (size_t i = 0; i < (sizeB-sizeA); i++) iB = iB->next;

		while (iA)
		{
			if (iA == iB) return iA;
			iA = iA->next;
			iB = iB->next;
		}

		return nullptr;
	}
};

#endif // SOLUTION_H
