//美好的一天，记得微笑
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i,j, m, n;
//	for (i = 1; i <= 7; i++)
//	{
//		for (m = 1; m <= 2 * i - 1; m++)
//		{
//			printf("*");
//		}
//		printf(" ");
//		printf("\n");
//	 }
//	for (j = 6; j >= 1; j--)
//	{
//		for (n = 1; n <= 2 * j - 1; n++)
//		{
//			printf("*");
//		}
//		printf(" ");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int i;
//	double j, m, n;
//	for (i = 0; i <= 999; i++)
//	{
//	    j = i % 10;
//	    m = i / 100;
//	    n = (i - j - m * 100) / 10;
//		if (i == pow(j,3) + pow(m,3) + pow(n,3))
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, Sn, sum=0;
	for (a = 1; a <= 5; a++)
	{
		Sn = a * 5 + a * 10 * 4 + a * 100 * 3 + a * 1000 * 2 + a * 10000;
		sum += Sn;
	}
	printf("%d", sum);
	system("pause");
}
