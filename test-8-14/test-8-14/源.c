#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int S = 0;
//	int B = 0;
//	int G = 0;
//	int i = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		B = i / 100;
//		G = i % 10;
//		S = (i / 10) % 10;
//		if (pow(G, 3) + pow(S, 3) + pow(B, 3) == i)
//		{
//			printf("%d��ˮ�ɻ���\n", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	printf("��������Ҫ�����֣�");
//	scanf("%d", &x);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("��%d��Ԫ����Ҫ�ҵ���", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("-1");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{		
//		j = j * 10 + a;
//		sum += j;
//	}
//	printf("��Ϊ%d", sum);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	//698520
//	int i = 0;
//	char b[10] = { 0 };
//	
//	for (i = 1; i <= 3; i++)
//	{	
//		printf("����������: ");
//	    scanf("%s", b);
//		if (strcmp(b, "698520") == 0)
//	    {
//		   printf("������ȷ\n");
//		   break;
//	    }
//		else
//		{ 
//			printf("�����������������\n");
//		}
//		  
//	}
//	if (i == 3)
//	{
//        printf("���δ����˳�����\n");
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
			printf("\n");
		}
		else if (ch>='a' && ch<='z')
		{
			putchar(ch - 32);
		}
		else 
			break;
	}
	return 0;
}