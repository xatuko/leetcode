#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <stack>
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
	vector<int> postorderTraversal(TreeNode* root) {
		if (!root) return { };

		std::stack<TreeNode*> visit;
		std::stack<TreeNode*> order;

		visit.push(root);

		while (!visit.empty())
		{
			TreeNode* cur = visit.top();
			visit.pop();

			order.push(cur);

			if (cur->left) visit.push(cur->left);
			if (cur->right) visit.push(cur->right);
		}

		std::vector<int> result(order.size());

		for (size_t i = 0; !order.empty(); i++)
		{
			result[i] = order.top()->val;
			order.pop();

		}

		return result;
	}
};

#endif // SOLUTION_H
