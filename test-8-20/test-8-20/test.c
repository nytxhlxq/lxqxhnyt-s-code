#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Fac(int x)
//{
//	if (x == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return x * Fac(x - 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	ret = Fac(num);
//	printf("%d的阶乘为%d\n", num, ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);
//	for (i = n; i >= 1; i--)
//	{
//		num *= i;
//	}
//	printf("%d的阶乘为%d\n", n, num);
//}


//非递归
//int my_strlen(char* arr1)
//{
//	int count = 0;
//	if (*arr1 == '\0')
//	{
//		return 0;
//	}
//	while (*arr1 != '\0')
//	{
//			count++;
//			arr1++;
//	}
//	return count;
//}


//递归
//int my_strlen(char* arr1)
//{
//	if (*arr1 == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr1 + 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	char arr[10] = "abcef";
//	ret = my_strlen(arr);
//	printf("数组有%d个元素\n", ret);
//	return 0;
//}

void reverse_string(char* arr1)
{
	if (*arr1 == '\0')
	{
        return 0;
    }
	reverse_string(arr1 + 1);
	printf("%c", *arr1);
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	return 0;
}