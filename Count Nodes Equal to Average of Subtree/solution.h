#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>
#include <unordered_map>

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
	pair<int,int> subSum(TreeNode* node, int & res)
	{
		if (!node) return {0,0};

		if (!node->left && !node->right) // Last node
		{
			res++;
			return { node->val, 1};
		}

		int sum = node->val;
		int cnt = 1;

		if (node->left)
		{
			auto l = subSum(node->left, res);
			sum += l.first;
			cnt += l.second;
		}
		if (node->right)
		{
			auto r = subSum(node->right, res);
			sum += r.first;
			cnt += r.second;
		}

		if (sum/cnt == node->val) res++;

		return { sum, cnt };
	}

	int averageOfSubtree(TreeNode* root) {
		int res = 0;
		int cnt = 0;

		subSum(root, res);

		return res;
	}
};

#endif // SOLUTION_H