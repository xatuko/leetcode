#ifndef SOLUTION_H
#define SOLUTION_H

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
public:
	void getVals(TreeNode* root, vector<int>& vals)
	{
		if (!root)
			return;

		vals.push_back(root->val);
		getVals(root->left,vals);
		getVals(root->right,vals);
	}

	vector<int> preorderTraversal(TreeNode* root)
	{
		if (!root) return { };

		vector<int> result;
		getVals(root, result);

		return result;
	}
};

#endif // SOLUTION_H
