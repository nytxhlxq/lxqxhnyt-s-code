#define _CRT_SECURE_NO_WARNINGS 1clude<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int fib(int i)
{
	int x = 0;
	int a = 1;
	int b = 1;
	int c = a + b;
	if (i < 3)
		return 1;
	for (x = 1; x < i - 1; x++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int ret = 0;
	int i = 0;
	printf("求第几个fib数：\n");
	scanf("%d", &i);
	ret = fib(i);
	printf("%d", ret);
	system("pause");
	return 0;
}

#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int num = 0;
    for (i = 1; i <= 9; i++)
    {
      for (j = 1; j <= i; j++)
      {
         num = i * j;
         printf("%d*%d=%2d ", i, j, num);
	  }
      printf("\n");
    }
	system("pause");
    return 0;
}