//美好的一天，记得微笑
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int x, y, t;
//    scanf("%d", &x);
//	scanf("%d", &y);
//	t = x;
//	x = y;
//	y = t;
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}


int main()
{
	int a[10] = {2,4,6,3,8,0,-3,23,-14,9};
	int t, i, b;
	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10 - i; b++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
		   printf("%d", a[i]);
	}
	system("pause");
	return 0;
}



