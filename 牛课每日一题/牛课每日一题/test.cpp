#include<iostream>
using namespace std;
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