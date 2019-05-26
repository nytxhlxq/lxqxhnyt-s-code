//美好的一天，记得微笑
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
 float add(float x, float y)
{
	return x + y;
}
float sub(float x, float y)
{
	return x - y;
}
float mul(float x, float y)
{
	return x * y;
}
float Div(float x, float y)
{
	return x / y;
}
int main()
{
	int i = 1;
	float x = 0.0,y = 0.0;
	float ret = 0;
	while (i)
	{
		printf("***********************\n");
		printf("*   1.add     2.sub   *\n");
		printf("*   3.mul     4.div   *\n");
		printf("***********************\n");
		printf("请选择要运行的项目:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1: printf("请输入要计算的数字\n");
			scanf("%f %f", &x, &y);
			ret = add(x, y);
			break;
		case 2: printf("请输入要计算的数字\n"); 
			scanf("%f %f", &x, &y);
			ret = sub(x, y);
			break;
		case 3: printf("请输入要计算的数字\n"); 
			scanf("%f %f", &x, &y);
			ret = mul(x, y);
			break;
		case 4: printf("请输入要计算的数字\n");
			scanf("%f %f", &x, &y);
			if (y == 0)
			{
				printf("除数不能为0\n");
			}
			else ret = Div(x, y);
			break;
		default:printf("输入错误请重试\n");
		}
		printf("%.1f\n", ret);
	}
    system("pause");
	return 0;
}