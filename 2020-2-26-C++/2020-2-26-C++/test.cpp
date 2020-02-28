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
	//const list<int>::iterator it = mylist0.begin();  常方法定义也可以，在底层其实两种情况都存在，但常方法下不能修改对象
	while (it != mylist0.end())
	{
		cout << *it <<"-->";
		++it;
	}
	cout << "Over." << endl;
	//正向
	auto it1 = mylist0.begin();
	while (it1 != mylist0.end())
	{
		cout << *it1 << "-->";
		++it1;
	}
	cout << "Over." << endl;
	cout << typeid(it1).name() << endl;
	//反向
	auto it2 = mylist0.rbegin();
	while (it2 != mylist0.rend())
	{
		cout << *it2 << "-->";
		++it2;
	}
	cout << "Over." << endl;

	list<int>::reverse_iterator it3 = mylist0.rbegin();
	while (it3 != mylist0.rend())
	{
		cout << *it3 << "-->";
		++it3;
	}
	cout << "Over." << endl;
	cout << "front:" << mylist0.front() << ",back:" << mylist0.back() << ",size:" << mylist0.size() <<endl;
	
	mylist0.pop_front();
	mylist0.push_front(0);
	mylist0.pop_back();
	mylist0.push_back(7);
	for (const auto &e : mylist0)
	{
		cout << e << "-->";
	}
	cout << "0ver." <<endl;

	auto it4 = find(mylist0.begin(), mylist0.end(), 3);//此处的3是指list中的3这个元素，若不存在则指到最后一个节点位置
	mylist0.insert(it4, 8);//插入所指的位置是一个迭代器
	for (const auto &e : mylist0)
	{
		cout << e << "-->";
	}
	cout << "0ver." << endl;

	//mylist0.clear();清除链表
	
	auto pos = mylist0.end();//
	mylist0.erase(--pos);//end指的是最后一个元素的下一个元素，微观上是begin，因此要--pos使它正确指到end上
	for (const auto &e : mylist0)
	{
		cout << e << "-->";
	}
	cout << "0ver." << endl;
	//迭代器失效问题
	auto pos1 = find(mylist0.begin(), mylist0.end(), 3);
	//mylist.erase(pos1); cout<<"pos ="<<*pos1<<endl;//此时会出现迭代器失效，出现在删除中间节点的情况中
	pos = mylist0.erase(pos1);//更新迭代器，则会使pos指向下一个节点,解决失效的问题
	cout << "pos =" << *pos << endl;
}
