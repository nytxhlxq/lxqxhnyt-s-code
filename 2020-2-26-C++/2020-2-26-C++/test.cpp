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
	list<int>mylist3(arr, arr + n);//�����ǵ�������
	list<int>mylist4(mylist3.begin(), mylist3.end());//��������
	
	//vector<int>v = { 1, 2, 3, 4, 5 };
	//for(int i = 0;i < v.size().++i)
	//     cout<<v[i]<<" ";
	//   cout<<endl;        �˷����������ڴ�ӡlist����Ϊlist��֧��[]����

	for (const auto &e : mylist0)
		cout << e << "-->";
	cout <<"Over."<< endl;
	//ͨ�÷��ʷ���
	list<int>::iterator it = mylist0.begin();
	while (it != mylist0.end())
	{
		cout << *it <<"-->";
		++it;
	}
	cout << "Over." << endl;
	//����
	auto it1 = mylist1.begin();
	while (it1 != mylist0.end())
	{
		cout << *it1 << "-->";
		++it1;
	}
	cout << "Over." << endl;
	system("pause");
	//����
	auto it2 = mylist0.rbegin();
	while (it2 != mylist0.rend())
	{
		cout << *it2 << "-->";
		++it2;
	}
	cout << "Over." << endl;
}