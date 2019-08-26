#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	/*while (*src)
	{
		*dest = *src;
		dest++;
		src++ ;
	}
	*dest = *src;
	return ret;*/
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = { 0 };
	const char* p = "hello bit";
	my_strcpy(arr, p);
	printf("%s\n", arr);
	return 0;
}



char* my_strcat(char* dest, const char* scr)
{
	assert(dest != NULL);
	assert(scr != NULL);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *scr++))
	{
		;
	}
	return ret;
}
int main()
{
	//方框里要放数字
	char arr[15] = "hello ";
	const char* p = "world";
	my_strcat(arr, p);
	printf("%s", arr);
	return 0;
}


void Find(int* arr,int sz)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < sz; i++)
	{
		count = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				//不重复的是1，重复的是2
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d", arr[i]);
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Find(arr,sz);
	return 0;
}

int main()
{
	int i = 0;
	int sum = 0;
	printf("请输入钱数：\n");
	scanf("%d", &i);
	sum = 2 * i - 1;
	printf("可以喝%d瓶汽水", sum);
}