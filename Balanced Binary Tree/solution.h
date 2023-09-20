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
	int maxDepth(TreeNode* head, int depth)
	{
		if (!head)
			return depth;

		return std::max(maxDepth(head->left, depth+1), maxDepth(head->right, depth+1));
	}

	bool isBalanced(TreeNode* root)
	{
		if (!root)
			return true;

		if (std::abs(maxDepth(root->left, 0)-maxDepth(root->right, 0)) > 1)
			return false;

		return isBalanced(root->left) && isBalanced(root->right);;
	}
};

#endif // SOLUTION_H