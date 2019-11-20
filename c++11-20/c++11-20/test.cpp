#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
////using namespace std;
////void fun
////{
////	std::cout << hello<< std::endl;
////}
//namespace myspace
//{
//	void fun(char ch)
//	{
//		cout << "This is fun(char)" << endl;
//	}
//};
//
//
//namespace youspace
//{
//	void fun(int a)
//	{
//		cout << "This is fun(int)" << endl;
//	}
//	//void show();
//};

//using namespace myspace;
//using youspace::show();
int fun(int a,char b, int c)
{
	return a > b ? a : b;
}

int fun(int a, int b = 5, int c = 5)
{
	return a + b + c;
}
void main()
{
	//fun('a');
	/*myspace::fun('A');
	youspace::fun(0);
	cout << "Hello Bit." << endl;*/
	/*int a = 0;
	char ch = 'A';
	double d = 12.34;*/
	//cout << a <<endl;  //printf("%d",a);
	//cout << ch << endl;  //printf("%c",ch);
	//cout << d << endl;  //printf("%f",d);
	//int b = 20;  //可以在后面定义变量	
	//cout << b << endl;
	/*int a;
	char b;
	double c;
	cin >> a;
	cin >> b >> c;
	cout << a << endl;
	cout << b << endl << c;*/
	cout << fun(10,20) << endl;

}