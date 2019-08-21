#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//非递归
//int JudgeFib(int n)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = b = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个数:\n");
//	scanf("%d", &num);
//	ret = JudgeFib(num);
//	printf("第%d个斐波那契数是%d", num, ret);
//	return 0;
//}
//int count_one_bits(unsigned int x)
//{
//	int i = 32;
//	int count = 0;
//	while (i--)
//	{
//		if ((x & 1) == 1)
//		{
//			count++;	
//		}
//		x = x >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	int a = 0;
//	printf("输入一个数:\n");
//	scanf("%d", &a);
//	ret = count_one_bits(a);
//	printf("%d", ret);
//	return 0;
//}
//void GetEve(int x)
//{
//	int i = 16;
//	x = x >> 1;
//	printf("奇数列为：\n");
//	while (i--)
//	{
//		if ((x & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		x = x >> 2;
//	}
//	printf("\n");
//}
//void GetOdd(int x)
//{
//	int i = 16;
//	printf("偶数列为：\n");
//	while (i--)
//	{
//		if ((x & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		x = x >> 2;
//	}
//	printf("\n");
//}
//void GetNum(int x)
//{
//	GetEve(x);
//	GetOdd(x);
//}
//int main()
//{
//	int a = 0;
//	printf("输入一个数:\n");
//	scanf("%d", &a);
//	GetNum(a);
//	return 0;
//}
//
//void PrintNum(int x)
//{
//	if (x > 9)
//	{
//		PrintNum(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int ret = 0;
//	int num = 0;
//	printf("输入一个数:\n");
//	scanf("%d", &num);
//	PrintNum(num);
//	return 0;
//}
//void Check_Dif_bit(int x, int y)
//{
//	int arr1[33] = { 0 };
//	int arr2[33] = { 0 };
//	int count = 0;
//	int i = 32;
//	while (i--)
//	{
//		if ((x & 1) != 1)
//		{
//			arr1[i] = 1;
//			x = x >> 1;
//		}
//		else
//		{
//			arr1[i] = 0;
//			x = x >> 1;
//		}		
//	}
//	i = 32;
//	while (i--)
//	{
//		if ((y & 1) != 1)
//		{
//			arr2[i] = 1;
//			y = y >> 1;
//		}
//		else
//		{
//			arr2[i] = 0;
//			y = y >> 1;
//		}
//	}
//	for (i = 0; i <= 32; i++)
//	{
//		if (arr1[i] != arr2[i])
//			count++;
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个数:\n");
//	scanf("%d %d", &m, &n);
//	Check_Dif_bit(m,n);
//	return 0;
//}