#define _CRT_SECURE_NO_WARNINGS 1
#include"BinTree.h"

int main()
{
	BinTree t;

	BinTreeInit(&t);
	BinTreeCreate(&t);
	//t = BinTreeCreate();

	printf("VLF:");
	PreOrder(&t);
	printf("\n");
	printf("LVF");
	InOrder(&t);
	printf("\n");
	printf("VFL");
	PostOrder(&t);
	printf("\n");
	return 0;
}