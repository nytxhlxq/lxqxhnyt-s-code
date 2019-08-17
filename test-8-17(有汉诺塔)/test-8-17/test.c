#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////设为全局变量：int step = 1;
//void Hanoi(int x,char a,char b,char c)
//{
//	//设为静态常变量
//	static int step = 1;
//	if (x == 1)
//	{
//		printf("第%d步:%d盘由%c塔移动到%c塔\n",step,x,a,c);
//		step++;
//	}
//	else
//	{
//		Hanoi(x - 1, a, c, b);
//		printf("第%d步:%d盘由%c塔移动到%c塔\n",step, x, a, c);
//        step++;
//		Hanoi(x - 1, b, a, c);		
//	}
//}
//
//int main()
//{
//	int num = 0;
//	char Tower1 = 'A';
//	char Tower2 = 'B';
//	char Tower3 = 'C';
//	printf("请输入汉诺塔层数：\n");
//	scanf("%d", &num);
//	printf("过程如下：\n");
//	Hanoi(num,Tower1,Tower2,Tower3);
//	return 0;
//}


//非递归
int JudgeFib(int n)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	a = b = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;
		    a = b;
		    b = c;
		}	
	}
	return c;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入一个数:\n");
	scanf("%d", &num);
	ret = JudgeFib(num);
	printf("第%d个斐波那契数是%d", num, ret);
	return 0;
}

//递归
