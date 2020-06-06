#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//2020.6.5
//抄送列表
int main()
{
	string s, res;
	while (getline(cin, s))
	{
		getline(cin, res);
		bool sta = false;
		for (int i = 0; i < s.length(); i++)
		{
			string t;
			if (s[i] == '"')
			{
				i++;
				while (i<s.length() && s[i] != '"')
				{
					t += s[i];
					i++;
				}
				if (t == res)
				{
					sta = true;
					break;
				}
			}
			else if (s[i] != ',')
			{
				while (i<s.length() && s[i] != ',')
				{
					t += s[i];
					i++;
				}
				if (t == res)
				{
					sta = true;
					break;
				}
			}
		}
		if (sta == true)
			cout << "Ignore" << endl;
		else
			cout << "Important!" << endl;
	}
	return 0;
}
//2020.6.4
//1.养兔子
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	long arr[91] = { 1, 1 };
	for (int i = 2; i <= 90; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	while (cin >> n){
		cout << arr[n] << endl;
	}
	return 0;
}
//2020.6.1
//1.美国接日
int WeekToDay(int y, int m, int c, int w, bool B)
{//输入哪年哪月第几个星期几，以及正数还是倒数，输出几号
	int d, week, i;
	if (m == 1)
	{ 
		m = 13;
	    y--; 
	}//公式要求1月、2月要转为上一年13、14月
	if (m == 2)
	{ 
		m = 14;
		y--; 
	}
	i = 0;
	for (d = B ? 1 : 31; d <= B ? 31 : 1; B ? (d++) : (d--))
	{//B：正数/倒数
		week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;//蔡勒公式
		if (week + 1 == w) 
			++i;
		if (i == c) 
			break;
	}
	return d;
}

int main(void){
	int y;
	while (cin >> y)
	{
		cout << y << "-01-01" << endl;
		printf("%d-01-%02d\n", y, WeekToDay(y, 1, 3, 1, 1));
		printf("%d-02-%02d\n", y, WeekToDay(y, 2, 3, 1, 1));
		printf("%d-05-%02d\n", y, WeekToDay(y, 5, 1, 1, 0));//倒数
		cout << y << "-07-04" << endl;
		printf("%d-09-%02d\n", y, WeekToDay(y, 9, 1, 1, 1));
		printf("%d-11-%02d\n", y, WeekToDay(y, 11, 4, 4, 1));
		cout << y << "-12-25" << endl << endl;
	}
	return 0;
}
//2.分解因数
int main()
{
	int num;
	while (cin >> num)
	{
		cout << num << " = ";
		int* num1 = new int[1000];
		int j = 0;
		for (int i = 2; i <= sqrt(num); i++)
		{
			while (num % i == 0)
			{
				if (num != 1)
				{
					num1[j] = i;
					j++;
					num /= i;
				}
			}
		}
		if (num != 1)
		{
			num1[j] = num;
			j++;
		}
		for (int k = 0; k < j; k++)
		{
			cout << num1[k];
			if (k + 1 < j)
			{
				cout << " * ";
			}
		}
		cout << endl;
	}
	return 0;
}
//3月2日
//1.100449 组队竞赛
int main()
{
	long long sum = 0;//此处要求所求值大小在[1,10^9]
	int n = 0;
	cin >> n;
	vector<int> a;
	a.resize(3 * n);//将数组扩充至大小为3n
	for (int i = 0; i < 3 * n; ++i)
	{
		cin >> a[i];
	}
	std::sort(a.begin(), a.end());
	for (int i = n; i <= 3 * n - 2; i += 2)
	{
		sum += a[i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
	
}
//2.69390 删除公共字符
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);//此处不用cin是因为cin在遇到空格就停止了
	int hashtable[256] = { 0 };
	for (int i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	string ret;
	for (int i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	system("pause");
	return 0;
}
/*
char* test(char *ar1, char *ar2)
{
	char *p1 = ar1;
	char *p2 = ar2;
	char *p3 = p1;
	while (*(p2) != '\0')
	{
		if (*(p3) == '\0')
		{
			p3 = p1;
		}
		while (*(p3) != '\0')
		{
			if (*(p2) == *(p3))
			{
				p3 = ++p3;
				continue;
			}	
			*p3++;
		}
		++p2;
	}
	return ar1;
}
void main()
{
	char ar1[] = "they are students.";
	char ar2[] = "aeiou";
	char* ret = test(ar1,ar2);
	cout << "string = " << ret << endl;
	system("pause");
}
*/