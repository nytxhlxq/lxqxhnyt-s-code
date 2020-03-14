#include<stdio.h>
int main()
{
	int y = 0;
	//(const)int(const)*(const)x=&y;
	int  *  const                 x = &y;      //内存不可变，值可改变

	int     const  *              x = &y;      //内存可变，值不可改变

	const   int    *              x = &y;      //内存可变，值不可改变
////////////////////////////////////////////////////////////////////////
	const   int    *   const      x = &y;      //内存不可变，值不可改变

	const   int        const *    x = &y;      //内存不可变，值不可改变
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
		default:{};//运行完default之后会继续往下走，执行后面剩的所以代码
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
  //计算结构体大小时要知道对齐值是多少（可以用#pragma pack(N)来设置），大小计算规则是：
  //(1)算前一个大小时要对齐到后一个大小的整数倍（a对齐到4，p对齐到8）
  //(2)最后总大小需是最大变量的整数倍（e对齐到24）
  //指针类型大小为4字节


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
//不用算数符号实现假发：(1)：没有进位时，加法操作与异或操作相同
//                      (2)：有进位时，除了“1+1”之外，加法操作与 &操作相同（加法有进位1，&没有）
//                           因此每次&之后向左移一位，再异或，循环往复直到没有进位为止；
int main()
{
	printf("%%%%\n");//打印两个%
	printf("****\n");//打印四个*
}