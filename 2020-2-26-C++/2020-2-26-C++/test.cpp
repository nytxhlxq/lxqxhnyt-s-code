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
	//const list<int>::iterator it = mylist0.begin();  ����������Ҳ���ԣ��ڵײ���ʵ������������ڣ����������²����޸Ķ���
	while (it != mylist0.end())
	{
		cout << *it <<"-->";
		++it;
	}
	cout << "Over." << endl;
	//����
	auto it1 = mylist0.begin();
	while (it1 != mylist0.end())
	{
		cout << *it1 << "-->";
		++it1;
	}
	cout << "Over." << endl;
	cout << typeid(it1).name() << endl;
	//����
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

	auto it4 = find(mylist0.begin(), mylist0.end(), 3);//�˴���3��ָlist�е�3���Ԫ�أ�����������ָ�����һ���ڵ�λ��
	mylist0.insert(it4, 8);//������ָ��λ����һ��������
	for (const auto &e : mylist0)
	{
		cout << e << "-->";
	}
	cout << "0ver." << endl;

	//mylist0.clear();�������
	
	auto pos = mylist0.end();//
	mylist0.erase(--pos);//endָ�������һ��Ԫ�ص���һ��Ԫ�أ�΢������begin�����Ҫ--posʹ����ȷָ��end��
	for (const auto &e : mylist0)
	{
		cout << e << "-->";
	}
	cout << "0ver." << endl;
	//������ʧЧ����
	auto pos1 = find(mylist0.begin(), mylist0.end(), 3);
	//mylist.erase(pos1); cout<<"pos ="<<*pos1<<endl;//��ʱ����ֵ�����ʧЧ��������ɾ���м�ڵ�������
	pos = mylist0.erase(pos1);//���µ����������ʹposָ����һ���ڵ�,���ʧЧ������
	cout << "pos =" << *pos << endl;
}
