#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////��Ϊȫ�ֱ�����int step = 1;
//void Hanoi(int x,char a,char b,char c)
//{
//	//��Ϊ��̬������
//	static int step = 1;
//	if (x == 1)
//	{
//		printf("��%d��:%d����%c���ƶ���%c��\n",step,x,a,c);
//		step++;
//	}
//	else
//	{
//		Hanoi(x - 1, a, c, b);
//		printf("��%d��:%d����%c���ƶ���%c��\n",step, x, a, c);
//        step++;
//		Hanoi(x - 1, b, a, c);		
//	}
//}
//
//int main()
//{
//	int num = 0;
//	char Tower1 = 'A';
//	char Tower2 = 'B';
//	char Tower3 = 'C';
//	printf("�����뺺ŵ��������\n");
//	scanf("%d", &num);
//	printf("�������£�\n");
//	Hanoi(num,Tower1,Tower2,Tower3);
//	return 0;
//}


//�ǵݹ�
int JudgeFib(int n)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	a = b = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;
		    a = b;
		    b = c;
		}	
	}
	return c;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("������һ����:\n");
	scanf("%d", &num);
	ret = JudgeFib(num);
	printf("��%d��쳲���������%d", num, ret);
	return 0;
}

//�ݹ�
