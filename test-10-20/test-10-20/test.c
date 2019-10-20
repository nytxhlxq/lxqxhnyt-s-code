#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
typedef enum
{
	FALSE,
	TRUE
}BOOL;

BOOL RET()
{
	return TRUE;
	return FALSE;
}
typedef struct Stack
{
	int *base;
	int  top;
	int  capacity;
}Stack;

BOOL StackFull(Stack *pst)
{
	return pst->top >= pst->capacity;
}
BOOL StackEmpty(Stack *pst)
{
	return pst->top == 0;
}
Stack* StackCreate(int k)
{
	Stack *pst = (Stack*)malloc(sizeof(Stack));
	pst->capacity = k;
	pst->base = (int*)malloc(sizeof(int)* pst->capacity);
	pst->top = 0;
	return pst;
}
void StackFree(Stack *pst)
{
	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->top = 0;
}
void StackPush(Stack *pst, int x)
{
	if (StackFull(pst))
		return;
	pst->base[pst->top++] = x;
}
void StackPop(Stack *pst)
{
	if (StackEmpty(pst))
		return;
	pst->top--;
}
int StackTop(Stack *pst)
{
	assert(pst->top != 0);
	return pst->base[pst->top - 1];
}

