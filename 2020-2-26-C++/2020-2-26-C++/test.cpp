#include<iostream>
#include<list>
#include<vector>
using namespace std;
void main()
{
	list<int>mylist;
	list<int>mylist0 = { 1, 2, 3, 4, 5, 6 };
	list<int>mylist1(10,1);
	list<int>mylist2(mylist1);
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(int);
	list<int>mylist3(arr, arr + n);//并不是迭代器法
	list<int>mylist4(mylist3.begin(), mylist3.end());//迭代器法
	
	//vector<int>v = { 1, 2, 3, 4, 5 };
	//for(int i = 0;i < v.size().++i)
	//     cout<<v[i]<<" ";
	//   cout<<endl;        此方法不能用于打印list，因为list不支持[]访问

	for (const auto &e : mylist0)
		cout << e << "-->";
	cout <<"Over."<< endl;
	//通用访问法：
	list<int>::iterator it = mylist0.begin();
	while (it != mylist0.end())
	{
		cout << *it <<"-->";
		++it;
	}
	cout << "Over." << endl;
	//正向
	auto it1 = mylist1.begin();
	while (it1 != mylist0.end())
	{
		cout << *it1 << "-->";
		++it1;
	}
	cout << "Over." << endl;
	system("pause");
	//反向
	auto it2 = mylist0.rbegin();
	while (it2 != mylist0.rend())
	{
		cout << *it2 << "-->";
		++it2;
	}
	cout << "Over." << endl;
}