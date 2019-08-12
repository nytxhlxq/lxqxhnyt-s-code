#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0, i = 0, j = 0,sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j==i)
//		printf("%d", i);
//
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0, sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			{
//				sum = i*j;
//				printf("%d*%d=%2d ",i,j, sum);	
//			}
//			
//				
//		}printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0,count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			count++;
//			printf("%dÄê \n", i);
//		}
//		
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1,b = 2,x=0;
//	x = a;
//	a = b;
//	b = x;
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0, k = 0, tmp = 0;
//	int a[10] = { 3, 15, 4, 9, 7, -6, 10, 11, 34, 1 };
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//
//		}
//		
//	}
//	printf("%d ", a[9]);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a=0,b=0,c=0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	 {
//		 if (a > c && b > c)
//			printf("%d>%d>%d",a,b,c);
//		 else if (a > c && c > b)
//			 printf("%d>%d>%d",a,c,b);
//		 else if(a < c)
//			 printf("%d>%d>%d",c,a,b);
//	 }
	//else if (a < b)
	// {
	//	 if (a > c)
	//		 printf("%d>%d>%d",b,a,c);
	//	 else if (a < c && b > c)
	//		 printf("%d>%d>%d",b,c,a);
	//	 else if (b < c)
	//		 printf("%d>%d>%d",c,b,a);
	// }
//    system("pause");
//	return 0;
//}


//void Check(int a, int b, int c)
//{
//	if (a > b)
//	 {
//		 if (a > c && b > c)
//			printf("%d>%d>%d",a,b,c);
//		 else if (a > c && c > b)
//			printf("%d>%d>%d",a,c,b);
//		 else if(a < c)
//		    printf("%d>%d>%d",c,a,b);
//	 }
//	else if (a < b)
//	{
//		if (a > c)
//			printf("%d>%d>%d", b, a, c);
//		else if (a < c && b > c)
//			printf("%d>%d>%d", b, c, a);
//		else if (b < c)
//			printf("%d>%d>%d", c, b, a);
//	}
//}
//int main()
//{
//	int x=0, y=0, z=0;
//	scanf("%d,%d,%d", &x, &y, &z);
//	Check(x, y, z);
//    system("pause");
//	return 0;
//}

//void Check(int *x, int *y)
//{
//	if (*x > *y)
//	{
//		*x = (*x) ^ (*y);
//		*y = (*x) ^ (*y);
//		*x = (*x) ^ (*y);
//	}
//}
//int main()
//{
//	int a = 0
//  int b = 0
//	int	c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	Check(&a, &c);
//	Check(&b, &c);
//	Check(&a, &b);
//	printf("%d<%d<%d", a, b, c);
//	system("pause");
//	return 0;
//}




