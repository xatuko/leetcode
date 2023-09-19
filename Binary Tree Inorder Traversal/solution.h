#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <vector>

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
	vector<int> inorder;
public:
	void bypass(TreeNode* root)
	{
		if (!root) return;
		if (root->left) bypass(root->left);
		inorder.push_back(root->val);
		if (root->right) bypass(root->right);
	}
	vector<int> inorderTraversal(TreeNode* root)
	{
		bypass(root);
		return inorder;
	}
};

#endif // SOLUTION_H