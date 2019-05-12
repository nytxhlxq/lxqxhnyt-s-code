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


//int main()
//{
//	int a[10] = {10,0,3,4,5,6,7,8,9,11};
//	int t, i, b, max = 1;
//	for (i = 0; i < 10; i++)
//	{
//		t = a[i];
//		if (a[i] > max)
//		{
//			b = a[i];
//			a[i] = max;
//			max = b;
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}


int main()
{
	int i,t, a[10] = {2, 3, 5, 7, 8, 0, 34, 21, -1, -5};
	for (i = 0; i < 10; i++)
	{
		if (a[i] < a[i + 1])
		{
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;

		}
		else;
	}

}
