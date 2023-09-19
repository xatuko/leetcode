#ifndef SOLUTION_H
#define SOLUTION_H

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
	bool compare(TreeNode* l, TreeNode* r)
	{
		if (!l && r) return false;
		if (l && !r) return false;
		if (!l && !r) return true;
		if (l->val != r->val) return false;

		return compare(l->left, r->left) && compare(l->right, r->right);
	}

	bool isSymmetric(TreeNode* root) {
		if (!root) return true;
		if (root->left && !root->right) return false;
		if (!root->left && root->right) return false;
		if (!root->left && !root->right) return true;

		return compare(root->left, root->right);
	}
};

#endif // SOLUTION_H