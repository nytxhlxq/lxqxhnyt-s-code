#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int *Fib)
{
	int num = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	for (num = 0; num < 30; num++)
	{
		c = a + b;
		b = c;
		a = b;
		Fib[num] = c;
	}
	return *Fib;
}
int FindFib(int i)
{
	int j = 0;
	int *Fib[30] = { 0 };
	int *p = fib(&Fib);
	for (j = 0; j < 30;j++)
	{
		if (Fib[j] < j)

	}
}
int main()
{
	int step = 0;
	int i = 0;
	scanf("%d", &i);
	step = FindFib(i);
	printf("需要%d步完成", step);
	system("pause");
	return 0;
}

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		c = a + b;
//		b = c;
//		a = b;
//		printf("%d.%d\n",i, c);
//	}
//	system("pause");
//	return 0;
//}

//void FindNum(int *arr1, int i)
//{
//	if (i > arr1[i][j])
//	{
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { { 1, 3, 6 }, {2, 5, 8 }, {4,9,10} };
//	int i = 0;
//	scanf("%d", &i);
//	FindNum(&arr, i);
//	system("pause");
//	return 0;
//}