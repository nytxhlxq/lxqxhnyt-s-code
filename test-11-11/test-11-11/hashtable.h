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
//������һ���������������Hash��Hash��Ĵ洢��λ��ΪͰ��
//ÿ��Ͱ�ܷ�3����������һ��Ͱ��Ҫ�ŵ�Ԫ�س���3��ʱ��
//��Ҫ���µ�Ԫ�ش�������Ͱ�У�ÿ�����ͰҲ�ܷ�3��Ԫ�أ�
//������Ͱʹ��������������Hash��Ļ�Ͱ��ĿΪ����P��
//Hash���hash������Pȡģ�����붨�����£�
//���ڼ���hash_table�Ѿ���ʼ�����ˣ�
//insert_new_element()����Ŀ���ǰ�һ���µ�ֵ����hash_table�У�
//Ԫ�ز���ɹ�ʱ����������0�����򷵻�-1����ɺ�����
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