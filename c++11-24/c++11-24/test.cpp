#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<typeinfo.h>
using namespace std;

//1.��������const ��ô��
//2.GetData������GetData����const�Ƿ񹲴�
//3.�������캯����const
//4.��ֵ���
//Test& operator = ��const Test &t��
//void operator = ��Test t��
//class CGoods
//{
//public:
//	void RegisterGoods(char *name, int count, float price);
//	void SetName(char *name);
//	void SetCount(int count);
//	void SetPrice(float price);
//public:
//	char *GetName()
//	{
//		return name;
//	}
//	int GetCount()
//	{
//		return count;
//	}
//	float GetPrice()
//	{
//		return price;
//	}
//	float GetTotalPrice()
//	{
//		return price * count;
//	}
//private:
//	char name[10];
//	int count;
//	float price;
//	float total;
//};
//
//void CGoods::RegisterGoods(char *name, int count, float price)
//{
//	//this���ڳ�Ա������һ�����ε��βΣ�����Ϊ��
//	strcpy(this->name, name);
//	this->count = count;
//	this->price = price;
//}
//
//void CGoods::SetName(char *name)
//{
//	strcpy(this->name,name);
//}
//
//void CGoods::SetCount(int count)
//{
//	this->count = count;
//}
//
//void CGoods::SetPrice(float price)
//{
//	this->price = price;
//}
//
//void main()
//{
//	CGoods s1;
//	CGoods s2;
//	s1.RegisterGoods("C++", 50, 30);	
//	s2.RegisterGoods("Java",40, 20);
//	cout <<s1.GetTotalPrice()<< endl;
//}
//struct Student 
//{
//	char name[10];
//	//
//	//
//	//
//}std;
//
//void main()
//{
//	Student st1;
//	Student st2;
//}
//class Student
//{
//public:(����ֱ�ӷ���)
//protected:(������ֱ�ӷ���)
//privata:(ͬ��)
//public:
//	void RegisterStu(char *n, char *s, int a, int h, int w)
//	{
//		strcpy(name, n);
//		strcpy(sex, s);
//		age = a;
//		int height;
//		int weight;
//	}
//private:
//	char name[10];  //���ݳ�Ա
//	char sex[3];
//	int age;
//	int height;
//	int weight;
//};

//��װ

//void Student::RegisterStu(char *n, char *s, int a, int h, int w)
//{
//	strcpy(name, n);
//	strcpy(sex, s);
//	age = a;
//	height = h;
//	weight = w;
//}


//void main()
//{
//	Student s;  //ʵ���� ����
//	//s.height = 100;//���ʲ���˽�е�
//	s.RegisterStu("ͩ", "Ů", 20, 170, 50);
//}


//void f(nullptr_t)
//{
//	cout<<f(nullptr)<<endl;
//}
//void main()
//{
//	auto a = 10;//���� 10 �����Ͷ���a
//	decltype(a) b;//���a�����͸���b
//	cout << typeid(a) << endl;
//	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//eleΪԪ��ֵ
//	for (auto ele : ar)
//		cout << ele << "";
//	cout << endl;
//	f(nullptr);
//}
//void main()
//{
//	int a = 0;
//	int &ra = a;
//	//ra = 100;
//	double b = 12.34;
//	//int &rb = b;
//	//int rb = b;
//	int &rb = (int&)b;
//}
//int& Add(int a, int b) {
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	//cout << typeid(ret) << endl;
//	return 0;
//}