#ifndef _BINTREE_H_
#define _BINTREE_H_

#include"common.h"

typedef struct BinTreeNode
{
	DataType data;
	struct BinTreeNode *LeftChild;
	struct BinTreeNode *RightChild;
}BinTreeNode;

//typedef struct BinTree
//{
//	BinTreeNode *root;
//}BinTree;

typedef BinTreeNode *BinTree;

void BinTreeInit(BinTree *t);
void BinTreeCreate(BinTree *t);
void PreOrder(BinTree *t);
void InOrder(BinTree *t); 
void PostOrder(BinTree *t);
void LevelOrder(BinTree *t);
BinTreeNode* _BinTreeCreateByStr(char *str, int *i);
size_t Size(BinTree *t);
size_t Height(BinTree *t);
BinTreeNode* Find(BinTree *t, DataType key);
BinTreeNode* Parent(BinTree *t, DataType key);


void BinTreeInit(BinTree *t)
{
	*t = NULL;
}

/*
BinTreeNode *BinTreeCreate()
{
	DataType item;
	scanf("%c", &item);
	//字母为有节点，#为无
	if (item == '#')
	{
	    return NULL;
	}
	else
	{
		BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->LeftChild = BinTreeCreate();
		t->RightChild = BinTreeCreate();
	}
}
*/

void BinTreeCreate(BinTree *t)
{
	DataType item;
	scanf("%c", &item);
	if (item == '#')
	{
		*t = NULL;
	}
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		(*t)->data = item;
		//&带个东西是个地址
		BinTreeCreate(&((*t)->LeftChild));
		BinTreeCreate(&((*t)->RightChild));
	}
} 


void PreOrder(BinTree *t)
{
	if (t != NULL)
	{
		printf("%c", (*t)->data);
		PreOrder(&((*t)->LeftChild));
		PreOrder(&((*t)->RightChild));
	}
}
void InOrder(BinTree *t)
{
	if (t != NULL)
	{
		InOrder(&((*t)->LeftChild));
		printf("%c", (*t)->data);
		InOrder(&((*t)->RightChild));
	}
}
void PostOrder(BinTree *t)
{
	if (t != NULL)
	{
		PostOrder(&((*t)->LeftChild));
		PostOrder(&((*t)->RightChild));
		printf("%c", (*t)->data);
	}
}


BinTreeNode* _BinTreeCreateByStr(char *str, int *i)
{
	if (str[*i] == '#' || str[*i] == '\0')
	{






		return i;
	}
}

BinTreeNode* Parent(BinTree *t, DataType key)
{
	BinTreeNode *p = _Find(t, key);
	if (t == NULL || p == NULL || p == (*t))
	{
		return NULL;
	}
	if ((*t)->LeftChild == p || (*t)->RightChild == p)
		return t;
	pr = _Parent((*t)->LeftChild, key);
}

BinTreeNode* Find(BinTree *t, DataType key)
{
	if (t == NULL)
	{
		return NULL;
	}
	else
	{

	}
}

void LevelBinTree(BinTree *t)
{
	//需一个队列，取根，判空，再取左右，出队；
}
size_t Height(BinTree *t)
{

}

#endif _BINTREE_H_