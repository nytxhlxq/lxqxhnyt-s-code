#define _CRT_SECURE_NO_WARNINGS 1

//����232����ջʵ�ֶ���
//////ʹ��ջʵ�ֶ��е����в�����
//////      push(x) --��һ��Ԫ�ط�����е�β����
//////      pop() --�Ӷ����ײ��Ƴ�Ԫ�ء�
//////      peek() --���ض����ײ���Ԫ�ء�
//////      empty() --���ض����Ƿ�Ϊ�ա�


typedef enum{ FALSE, TURE } BOOL;

BOOL isFull()
{
	return TURE;
	return FALSE;
}

typedef struct
{
	int base[8];
	int top;
	int front;
} MyStack;

typedef struct
{
	MyStack Q1;
	MyStack Q2;
} MyQueue;

MyQueue *myQueueCreate()
{
	MyQueue *P = (MyQueue *)malloc(sizeof(MyQueue));
	if (P)
		return;
	P->Q1.top = -1;
	P->Q1.front = -1;
	P->Q2.top = -1;
	P->Q2.front = -1;
	return P;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x)
{
	if (obj)
		return;
	if (obj->Q1.top != 8)
	{
		obj->Q1.top++;
		obj->Q1.base[obj->Q1.top] = x;
		if (obj->Q1.top == 0)
			obj->Q1.front = x;
	}
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue *obj)
{
	if (obj->Q2.top == -1)
	{
		while (obj->Q1.top != -1)
		{
			obj->Q2.base[++obj->Q2.top] = obj->Q1.base[obj->Q1.top--];
		}
	}
	return obj->Q2.base[obj->Q2.top--];
}

/** Get the front element. */
int myQueuePeek(MyQueue *obj)
{
	if (obj->Q2.top != -1)
	{
		return obj->Q2.base[obj->Q2.top];
	}
	return obj->Q1.front;
}

/** Returns whether the queue is empty. */
BOOL myQueueEmpty(MyQueue* obj)
{
	return obj->Q2.top == -1 && obj->Q1.top == -1;
}

void myQueueFree(MyQueue* obj)
{
	free(obj);
}



/**
* Your MyQueue struct will be instantiated and called as such:
* MyQueue* obj = myQueueCreate();
* myQueuePush(obj, x);

* int param_2 = myQueuePop(obj);

* int param_3 = myQueuePeek(obj);

* bool param_4 = myQueueEmpty(obj);

* myQueueFree(obj);
*/