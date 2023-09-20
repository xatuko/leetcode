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
	int calcMinDepth(TreeNode* root, int depth)
	{
		if (!root) return depth;

		if (!root->right && !root->left) return depth;

		if (root->right && root->left) return std::min(calcMinDepth(root->left, depth+1), calcMinDepth(root->right, depth+1));
		else if (root->right) return calcMinDepth(root->right, depth+1);
		else if (root->left) return calcMinDepth(root->left, depth+1);
	}

	int minDepth(TreeNode* root)
	{
		if (!root) return 0;
		return calcMinDepth(root, 1);
	}
};

#endif // SOLUTION_H