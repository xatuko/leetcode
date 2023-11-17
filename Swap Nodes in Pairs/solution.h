#ifndef SOLUTION_H
#define SOLUTION_H

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
	ListNode* swapPairs(ListNode* head) {
		if (!head || !head->next) return head;

		ListNode* ptr1 = head;
		ListNode* ptr2 = head->next;
		ListNode* prev = nullptr;
		bool first = true;

		while (ptr1 && ptr2)
		{
			ListNode* s1 = ptr1;
			ListNode* s2 = ptr2;

			ptr1 = ptr2->next;
			if (ptr1) ptr2 = ptr1->next;

			s1->next = s2->next;
			s2->next = s1;
			if (prev) prev->next = s2;
			prev = s1;
			if (first)
			{
				head = s2;
				first = false;
			}
		}

		return head;
	}
};

#endif // SOLUTION_H