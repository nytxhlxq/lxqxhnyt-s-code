#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str0 = "HHniuniu";
	cout << "Direct output:"<<str0 << endl;//ֱ�����
	int i = 0;
	for (i = 0; i < str0.size(); ++i)//operator���
	{
		cout << str0.at(i);
	}
	cout << endl;
	for (auto &e : str0)//���ͷ��ʷ���,����&ʱֻ��ı䱾�����е�H
	{
		if (e == 'H')
			e = 'h';//�����е�H�ĳ�h
		cout << e;
	}
	cout << endl;
	/////////
	string str = "abcde@fg";
	size_t pos = str.find("d",2);//����Ϊ��ʼ���ҵ��±�
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
	//�˴���Ϊ��str2�в���substr�е�Ԫ��('l','x','q')��һ�γ��ֵ�λ��
	string str2 = "liuxinquan";
	string substr("lxq");
	size_t pos = str2.find_first_of(substr);//str2.find_last_of()���һ�γ��ֵ�
	cout << pos << endl;
	/////////
	//������
	//���������
	string str3 = "lxqnyt";
	string::iterator a = str3.begin();
	while (a != str3.end())
	{
		cout << *a;
		++a;
	}
	cout << endl;
	//����ʹ�����������ʵ�ַ��������
	string::iterator b = str3.end() - 1;
	while (b != str3.begin())
	{
		cout << *b;
		--b;
	}
	cout << endl;
	//���������
	string::reverse_iterator c = str3.rbegin();
	while (c != str3.rend())
	{
		cout << *c;
		++c;
	}
	cout << endl;
}