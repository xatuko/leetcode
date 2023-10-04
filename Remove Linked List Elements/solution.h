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
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val)
        {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        if (!head) return head;

        ListNode* ret = head;

        while (head && head->next)
        {
            if (head->next->val == val)
            {
                ListNode* tmp = head->next;
                head->next = head->next->next;
                delete tmp;
            }
            else head = head->next;
        }
        return ret;
    }
};

#endif // SOLUTION_H