#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str0 = "HHniuniu";
	cout << "Direct output:"<<str0 << endl;//直接输出
	int i = 0;
	for (i = 0; i < str0.size(); ++i)//operator输出
	{
		cout << str0.at(i);
	}
	cout << endl;
	for (auto &e : str0)//新型访问方法,不加&时只会改变本操作中的H
	{
		if (e == 'H')
			e = 'h';//把所有的H改成h
		cout << e;
	}
	cout << endl;
	/////////
	string str = "abcde@fg";
	size_t pos = str.find("d",2);//数字为开始查找的下标
	cout << pos << endl;
	/////////
	pos = str.find("bce");//pos = str.find("bcd",3);
	if (pos == string::npos)
		cout << "find not" << endl;
	else
		cout << pos << endl;
	/////////
	string str1 = "e@";
	size_t pos = str.find(str1);
	cout << pos << endl;
	/////////
	//此处意为在str2中查找substr中的元素('l','x','q')第一次出现的位置
	string str2 = "liuxinquan";
	string substr("lxq");
	size_t pos = str2.find_first_of(substr);//str2.find_last_of()最后一次出现的
	cout << pos << endl;
	/////////
	//迭代器
	//正向迭代器
	string str3 = "lxqnyt";
	string::iterator a = str3.begin();
	while (a != str3.end())
	{
		cout << *a;
		++a;
	}
	cout << endl;
	//反着使用正向迭代器实现反向迭代器
	string::iterator b = str3.end() - 1;
	while (b != str3.begin())
	{
		cout << *b;
		--b;
	}
	cout << endl;
	//反向迭代器
	string::reverse_iterator c = str3.rbegin();
	while (c != str3.rend())
	{
		cout << *c;
		++c;
	}
	cout << endl;
}