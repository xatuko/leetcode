#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <stack>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		if (!head) return head;
		ListNode* nhead = new ListNode(head->val, nullptr);
		ListNode* ret = nhead;

		while (head)
		{
			if (head->val != nhead->val)
			{
				nhead->next = new ListNode(head->val, nullptr);
				nhead = nhead->next;
			}
			head = head->next;
		}

		return ret;
	}

	// ListNode* deleteDuplicates(ListNode* head)
	// {
	// 	for (ListNode* ptr = head; ptr; ptr = ptr->next)
	// 	{
	// 		while(ptr->next && ptr->next->val == ptr->val)
	// 		{
	// 			ListNode* tmp = ptr->next;
	// 			ptr->next = tmp->next;
	// 			delete tmp;
	// 		}
	// 	}
	// 	return head;
	// }
};

#endif // SOLUTION_H