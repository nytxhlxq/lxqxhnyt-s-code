#include<iostream>
#include<string>
using namespace std;

namespace Lib
{
	class string
	{
		friend ostream& operator<<(ostream &out, const string &s);//有源方法
	   public:
		   string(const char *str = "") : m_str(nullptr)
		   {
			   m_capacity = m_size = strlen(str);
			   str = new char[m_capacity + 1];
			   strcpy(m_str, str);
		   }
		   string(const string &s) : m_str(nullptr), m_capacity(0), m_size(0)//初始化
		   {
			   string tmp(s.m_str);
			   _swap(*this, tmp);
		   }
		   string& operator = (const string &s)
		   {
			   if (this != &s)
			   {
				   string tmp(s);
				   _swap(*this, tmp);
			   }
			   return *this;
		   }
		   ~string()//析构函数
		   {
			   if (m_str)
			   {
				   delete []m_str;
				   m_str = nullptr;
			   }
			   m_capacity = m_size = 0;
		   }
	protected:
		static void _swap(string &s1, string &s2)//交换
		{
			std::swap(s1.m_str, s2.m_str);
			std::swap(s1.m_size, s2.m_size);
			std::swap(s1.m_capacity, s2.m_capacity);
		}
	   private:
		   char *m_str;
		   size_t m_capacity;
		   size_t m_size;
	};
	ostream& operator<<(ostream &out, const string &s)
	{
		out << s.m_str;
		return out;
	}
};
void main()
{
	Lib::string str("Hello bit");
	cout << "str = " << str << endl;
	Lib::string str1 = str;
	cout << "str1 =" << str1 << endl;
	Lib::string str2;
	str2 = str1;
	cout << "str2 = "<< str2 << endl;
}