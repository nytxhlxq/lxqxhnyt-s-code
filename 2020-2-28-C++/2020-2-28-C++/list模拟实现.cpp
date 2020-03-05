#include<iostream>
#include<list>
using namespace std;

namespace bit
{
	template<typename T>
	struct ListNode//�˴�������class��������ü��Ϲ��б�־public
	{
		ListNode(const T&val = T()) : _Next(nullptr), _Prev(nullptr), _Value(val)//��ʼ��
		{}
		//public
		ListNode<T> *_Next;
		ListNode<T> *_Prev;
		T _Value;
	};

	template<typename T>
	class ListIterator
	{
		typedef ListIterator slef;
	public:
		ListIterator() : _Ptr(nullptr)
		{}
		ListIterator(ListNode<T> *P) : _Ptr(P)
		{}
		~ListIterator()
		{}
	public:
		T& operator*()
		{
			return _Ptr->_Value;
		}
		T* operator->()
		{
			return
		}
		slef& operator++()
		{
			_Ptr = _Ptr->_Next;
			return *this;
		}
		slef& operator++(int)//���غ�++��ͨ��һ������������ǰ++
		{
			slef tmp = *this;
			++*this;
			return tmp;
		}
		slef& operator--()
		{
			_Ptr = _Ptr->_Prev;
			return *this;
		}
		slef& operator--(int)
		{
			slef tmp = *this;
			--*this;
			return tmp;
		}
		bool operator==(const slef &P)//���صȺ�
		{
			return _Ptr == P._Ptr;
		}
		bool operator!=(const slef &P)//���ز��Ⱥ�
		{
			return !(*this == P);
		}
	public:
		ListNode<T>* Mynode()
		{
			return _Ptr;
		}
	private:
		ListNode<T> *_Ptr;
	};
	//����
	template<typename T>
	class list
	{
		typedef ListNode<T>* PNode;
		typedef ListIterator<T> iterator;
	public:
		list() : _Head(_BuyNode()), _Size(0)
		{}
	public:
		size_t size()const
		{
			return _Size;
		}
		bool empty()const
		{
			return _Size == 0;
		}
	public:
		iterator begin()
		{
			return iterator(_Head->_Next);
		}
		iterator end()
		{
			return iterator(_Head);
		}
	public:
		void push_back(const T &val)
		{
			insert(end(), val);
		}
		void push_front(const T &val)
		{
			insert(begin(), val);
		}
	public:
		iterator insert(iterator pos, const T &Val)//ָ��λ�ýڵ����
		{
			PNode _S = new ListNode<T>(Val);
			PNode _P = pos.Mynode();
			_S->_Next = _P;
			_S->_Prev = _P->_Prev;
			_P->_Prev->_Next = _S;
			_P->_Prev = _S;          //����_S�ϵ��ĸ��ߵ�����
			_Size++;
			return iterator(_S);//�²���Ľڵ�ĵ�ַ����
		}
	private:
		PNode _BuyNode(const T &Val = T())
		{
			PNode _S = new ListNode<T>(Val);
			_S->_Next = _S->_Prev = _S;
			return _S;
		}
	private:
		ListNode<T> *_Head;
		size_t		 _Size;
	};
};

void main()
{
	bit::list<int> mylist;
	mylist.insert(mylist.end(), 1);
	mylist.insert(mylist.end(), 2);
	for (int i = 0; i <= 3; ++i)
		mylist.push_back(i);   //����ִ��
	/*
	C++11
	for (auto &e : mylist)
	cout << e << "-->";    //�޷�ִ�У�
	cout << "Over." <<endl;
	*/
	auto it = mylist.begin();
	while (it != mylist.end())
	{
		cout << *it << "-->";
		++it;
	}
	cout << "Over." << endl;
}