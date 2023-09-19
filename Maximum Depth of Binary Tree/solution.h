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
	int calcDepth(TreeNode* root, int depth)
	{
		if (!root)
			return depth;

		depth++;
		return std::max(calcDepth(root->left, depth), calcDepth(root->right, depth));
	}

	int maxDepth(TreeNode* root) {
		return calcDepth(root, 0);
	}
};

#endif // SOLUTION_H