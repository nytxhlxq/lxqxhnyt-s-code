#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Fib(int n)
//{
//	int c = 0;
//	int a = 0;
//	int b = 0;
//	a = 1;
//	b = 1;
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
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = Fib(i);
//	printf("%d", ret);
//	return 0;
//}



//void MulList(int x)
//{
//	int h = 0;
//	int w = 0;
//	int mul = 0;
//	for (h = 1; h <= x; h++)
//	{
//		for (w = 1; w <= h; w++)
//		{
//			mul = h*w;
//			printf("%d*%d=%2d ", h, w, mul);
//			
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int i = 0;
//	printf("请输入乘法口诀表大小：\n");
//	scanf("%d", &i);
//	MulList(i);
//	return 0;
//}
//
//
//
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int tmp = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		count = 0;
//	    sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}
//
//
//
//void Change(int* x,int* y)
//{
//	*x = (*x)^(*y);
//	*y = (*x)^(*y);
//	*x = (*x)^(*y);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	Change(&i, &j);
//	printf("%d %d", i, j);
//	return 0;
//}
//
//
//
//int Judge_Leap(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int ret = 0;
//	int year = 0;
//	printf("输入一个年份：");
//	scanf("%d", &year);
//	ret = Judge_Leap(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n",year);
//	}
//	return 0;
//}
//int Judge_Prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= x-1; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("输入一个数：");
//	scanf("%d", &i);
//	ret = Judge_Prime(i);
//	if (ret == 1)
//	{
//		printf("%d是素数\n", i);
//	}
//	else
//	{
//		printf("%d不是素数\n",i);
//	}
//	return 0;
//}



//void init(int* arr)
//{
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		*arr = 1;
//		arr++;
//	}
//}
//void empty(int* arr)
//{
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		*arr = 0;
//		arr++;
//	}
//}
//void reverse(int* arr)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + (9 - i));
//		*(arr + (9 - i)) = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 0 };
//	int j = 0;
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	init(arr1);	
//	for (j = 0; j <= 9; j++)
//	{
//		printf("%d", arr1[j]);
//	}
//	printf("\n");
//	for (i = 0; i <= 9; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	empty(arr1);
//	for (j = 0; j <= 9; j++)
//	{
//		printf("%d", arr1[j]);
//	}
//	printf("\n");
//	for (i = 0; i <= 9; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	reverse(arr1);
//	for (j = 0; j <= 9; j++)
//	{
//		printf("%d", arr1[j]);
//	}
//	return 0;
//}

