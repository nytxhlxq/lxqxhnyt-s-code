#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include"common.h"

////#define P 13
////typedef struct HashNode
////{
////	DataType data;
////	struct HashNode *link;
////}HashNode;
////
////typedef HashNode* HashTable[P];


///////////////////////////////////////
//现在有一个用来存放整数的Hash表，Hash表的存储单位称为桶，
//每个桶能放3个整数，当一个桶中要放的元素超过3个时，
//则要将新的元素存放在溢出桶中，每个溢出桶也能放3个元素，
//多个溢出桶使用链表串起来。此Hash表的基桶数目为素数P，
//Hash表的hash函数对P取模。代码定义如下：
//现在假设hash_table已经初始化好了，
//insert_new_element()函数目的是把一个新的值插入hash_table中，
//元素插入成功时，函数返回0，否则返回-1，完成函数。
/////////////////////////////////////////
#define P 7
#define NULL_DATA -1
struct buck_node
{
	int data[3];
	struct bucket_node *next;
};
struct bucket_node hash_table[P];
int insert_new_element(int new_element)
{
	int i = 0;
	while (p->data[i] > 3)
	{
		struct bucket_node *p = (struct bucket_node*)malloc(sizeof(int)* 3);
		p = p->next;
	}
		return NULL_DATA;
	return 0;
}
////////////////////////////////////////



////////////////////////////////////
void HashTableInit(HashTable * pht);
void HashTableInsert(HashTable pht);

int Hash(DataType key)
{
	return(key % P);
}
void HashTableInit(HashTable pht)
{
	for (int i = 0; i < P; ++i)
	{
		pht[i] = NULL;
	}
}

void HashTableInsert(HashTable pht,DataType x)
{
	int index = Hash(x);
	HashNode *s = (HashNode*)malloc(sizeof(HashNode));
	if (s == NULL)
		return false;
	s->data = x;
	s->link = pht[index];
	pht[index] = s;
	return true;
}

void HashTableShow(HashTable pht)
{
	for (int i = 0; i < P; ++i)
	{
		printf("%d:>");
		HashNode *p = pht[i];
		while (p != NULL)
		{
			printf("%d-->", p->data);
			p = p->link;
		}
		printf("Nul.");
	}
}

#endif /*_HASH_TABLE_H_*/