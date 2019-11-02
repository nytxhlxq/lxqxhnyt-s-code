#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

////////中序遍历二叉树

int BinTreeLVR(struct TreeNode* root, int *php, int* returnSize)
{
	if (root != NULL)
	{
		BinTreeLVR(root->left, php, returnSize);
		*(php + (*returnSize)) = root->val;
		(*returnSize)++;
		BinTreeLVR(root->right, php, returnSize);
	}
	return 0;
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
	int *php;
	php = (int *)malloc(100 * sizeof(int));
	*returnSize = 0;
	(void)BinTreeLVR(root, php, returnSize);
	return php;
}


///////相同的树

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if (p == q) {
		return true;
	}

	if ((p == NULL && q != NULL) || (p != NULL && q == NULL)) {
		return false;
	}

	if (p->val != q->val) {
		return false;
	}

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


///////二叉树的最大深度

int maxDepth(struct TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int Leftlen = maxDepth(root->left) + 1;
	int Rightlen = maxDepth(root->right) + 1;

	if (Leftlen >= Rightlen)
	{
		return Leftlen;
	}
	else{
		return Rightlen;
	}
}