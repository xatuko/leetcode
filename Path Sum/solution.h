#ifndef SOLUTION_H
#define SOLUTION_H

#include <algorithm>

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
	bool checkHasSum(TreeNode* root, int targetSum, int cur_sum)
	{
		if (!root) return false;

		cur_sum += root->val;

		if (targetSum == cur_sum && (!root->left && ! root->right))
			return true;

		return checkHasSum(root->left, targetSum, cur_sum) || checkHasSum(root->right, targetSum, cur_sum);
	}

	bool hasPathSum(TreeNode* root, int targetSum)
	{
		if (!root) return false;

		if (root && (!root->left && !root->right) && root->val == targetSum) return true;

		int cur_sum = root->val;

		return checkHasSum(root->left, targetSum, cur_sum) || checkHasSum(root->right, targetSum, cur_sum);
	}
};

#endif // SOLUTION_H