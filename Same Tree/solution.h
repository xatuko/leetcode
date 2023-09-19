#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <stack>

using namespace std;

#include <queue>

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
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (!p && !q) return true;
		else if (p && !q) return false;
		else if (!p && q) return false;

		if (p->val != q->val) return false;

		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}

	// bool isSameTree(TreeNode* p, TreeNode* q) {
	// 	if (!p && !q) return true;
	// 	std::queue<TreeNode*> pq, qq;
	// 	pq.push(p);
	// 	qq.push(q);

	// 	while (!pq.empty() && !qq.empty())
	// 	{
	// 		auto pqf = pq.front();
	// 		auto qqf = qq.front();

	// 		if ((pqf && !qqf) || (!pqf && qqf) || (pqf->val != qqf->val)) return false;

	// 		pq.pop();
	// 		qq.pop();

	// 		if ((!pqf->left && qqf->left) || (pqf->right && !qqf->right) || (pqf->left && !qqf->left) || (!pqf->right && qqf->right)) return false;

	// 		if (pqf->left && qqf->left)
	// 		{
	// 			pq.push(pqf->left);
	// 			qq.push(qqf->left);
	// 		}

	// 		if (pqf->right && qqf->right)
	// 		{
	// 			pq.push(pqf->right);
	// 			qq.push(qqf->right);
	// 		}
	// 	}

	// 	return true;
	// }
};

#endif // SOLUTION_H