//���õ�һ�죬�ǵ�΢Ц
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
		printf("��ѡ��Ҫ���е���Ŀ:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1: printf("������Ҫ���������\n");
			scanf("%f %f", &x, &y);
			ret = add(x, y);
			break;
		case 2: printf("������Ҫ���������\n"); 
			scanf("%f %f", &x, &y);
			ret = sub(x, y);
			break;
		case 3: printf("������Ҫ���������\n"); 
			scanf("%f %f", &x, &y);
			ret = mul(x, y);
			break;
		case 4: printf("������Ҫ���������\n");
			scanf("%f %f", &x, &y);
			if (y == 0)
			{
				printf("��������Ϊ0\n");
			}
			else ret = Div(x, y);
			break;
		default:printf("�������������\n");
		}
		printf("%.1f\n", ret);
	}
    system("pause");
	return 0;
}