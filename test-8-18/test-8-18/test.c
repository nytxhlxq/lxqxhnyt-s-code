#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Power(int x, int y)
{
	int i = 1;
	int num = 1;
	if (y == 0)
	{
		return 1;
	}
	else if (y == 1)
	{
		return x;
	}
	else
	{

	}
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("请输入两个数：\n");
	scanf("%d %d", &n, &k);
	ret = Power(n, k);
	printf("%d", ret);
	return 0;
}