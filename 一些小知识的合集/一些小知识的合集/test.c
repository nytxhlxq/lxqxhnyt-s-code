#include<stdio.h>
int main()
{
	int y = 0;
	//(const)int(const)*(const)x=&y;
	int  *  const                 x = &y;      //�ڴ治�ɱ䣬ֵ�ɸı�

	int     const  *              x = &y;      //�ڴ�ɱ䣬ֵ���ɸı�

	const   int    *              x = &y;      //�ڴ�ɱ䣬ֵ���ɸı�
////////////////////////////////////////////////////////////////////////
	const   int    *   const      x = &y;      //�ڴ治�ɱ䣬ֵ���ɸı�

	const   int        const *    x = &y;      //�ڴ治�ɱ䣬ֵ���ɸı�
}


int main()
{
	int x, y;
	switch (x){
	case 1:
		switch (y){
		case 0:{};
		case 1:{};
			break;
		default:{};//������default֮�����������ߣ�ִ�к���ʣ�����Դ���
		}
	case 2:{};
	}
}
struct A
{
	char a;
	int* p;
	double c;
	int d;
	char e;
}
; //sizeof(struct A) = 
  //����ṹ���СʱҪ֪������ֵ�Ƕ��٣�������#pragma pack(N)�����ã�����С��������ǣ�
  //(1)��ǰһ����СʱҪ���뵽��һ����С����������a���뵽4��p���뵽8��
  //(2)����ܴ�С��������������������e���뵽24��
  //ָ�����ʹ�СΪ4�ֽ�


int main()
{
	int a = 10, b = 2;
	int num = a ^ b;
	int sum = a & b;
	while (sum != 0)
	{
		a = num;
		b = sum << 1;
		num = a ^ b;
		sum = a & b;
	}
	printf("%d", num);
	return 0;
}
//������������ʵ�ּٷ���(1)��û�н�λʱ���ӷ���������������ͬ
//                      (2)���н�λʱ�����ˡ�1+1��֮�⣬�ӷ������� &������ͬ���ӷ��н�λ1��&û�У�
//                           ���ÿ��&֮��������һλ�������ѭ������ֱ��û�н�λΪֹ��
int main()
{
	printf("%%%%\n");//��ӡ����%
	printf("****\n");//��ӡ�ĸ�*
}