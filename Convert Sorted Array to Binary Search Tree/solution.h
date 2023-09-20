#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_set>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	void insert(TreeNode* head, int val)
	{
		auto ptr = head;
		while (true)
		{
			if (val > ptr->val)
			{
				if (ptr->right)
				{
					ptr = ptr->right;
					continue;
				}
				else
				{
					ptr->right = new TreeNode(val);
					return;
				}
			}
			else
			{
				if (ptr->left)
				{
					ptr = ptr->left;
					continue;
				}
				else
				{
					ptr->left = new TreeNode(val);
					return;
				}
			}
		}
	}

	void asd(vector<int>& nums, int start, int size, TreeNode* head, std::unordered_set<int>& visited)
	{
		if (size <= 0) return;

		int idx = start + size / 2;

		insert(head, nums[idx]);

		asd(nums, start, idx-start, head, visited);
		asd(nums, idx+1, size-(idx-start)-1, head, visited);
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.size() == 0)
			return nullptr;

		std::unordered_set<int> visited;

		int idx = nums.size() / 2;
		visited.insert(idx);

		TreeNode* head = new TreeNode(nums[idx]);

		asd(nums, 0, idx, head, visited);
		asd(nums, idx+1, nums.size()-1-idx, head, visited);

		return head;
	}
};

#endif // SOLUTION_H