//���õ�һ�죬�ǵ�΢Ц
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include<stdio.h>
int cfkj(int n)
{
	int j, sum, i;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			sum = i*j;
			printf("%d*%d=%d ", j, i ,sum);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = cfkj(n);
	system("pause");
	return 0;
}

int jh(int *n, int *m)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
	return 1;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int ret = jh(&n, &m);
	printf("%d %d", n, m);
	system("pause");
	return 0;
}

int pdrnf(int n)
{
	if (n % 4 == 0 && n % 10 == 0 || n % 400 == 0)
		return 1;//printf("������");
	else
		return 0;//printf("����");
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (pdrnf(n))
		printf("��");
	else
		printf("��");
	system("pause");
	return 0;
}
4.����
int pdss(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	{
		if (n%i == 0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	if (pdss(n))
		printf("��");
	else
		printf("����");
	system("pause");
	return 0;
}
