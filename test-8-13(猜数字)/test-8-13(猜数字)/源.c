#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void Game()
//{
//	int n = 0;
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	n = rand()%100 + 1;
//	while (1)
//	{
//		printf("请输入猜的数：");
//		scanf("%d", &a);
//		if (a > n)
//		{
//			printf("猜大了\n");
//		}
//		if (a < n)
//		{
//			printf("猜小了\n");
//		}
//		if (a == n)
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int num = 0;
////again:
//	do
//	{
//		printf("******************\n");
//		printf("***   1.play   ***\n");
//		printf("***   0.exit   ***\n");
//		printf("******************\n");
//		printf("请选择：\n");
//		scanf("%d", &num);
//		switch (num)
//		{
//		case 1:Game();
//			break;
//		case 0:
//			printf("结束游戏\n");
//			break;
//		default:
//			printf("输入错误请重试\n");
//			/*goto again;*/
//		}
//	} while (num);
//	system("pause");
//	return 0;
//}  


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d %d", &i, &j);
//    while ( k = i%j )
//	{
//	    i = j;
//		j = k;
//	}
//	printf("最小公约数为%d", j);
//	system("pause");
//	return 0;


//int main()
//{
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count1++;
//		}
//		if (i % 10 == 9)
//		{
//			count2++;
//		}
//	}
//	printf("%d", count1 + count2 + count3);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i<=7; i++)
//	{
//		j = 0;
//		for (j = 1; j<=6 + 1 - i; j++)
//		{
//			printf(" ");
//	    }
//		for (j = 1; j<=2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		j = 0;
//		for (j = 1; j<i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (7 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


