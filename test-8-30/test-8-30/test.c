#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src, size_t count)
{
	assert(dest && src);
	//dest�����Ѿ��ı䣬����һ����������¼��ʼλ��
	char* ret = dest;
	while (count && (*dest++ = *src++))
	{
		count--;
	}
	if (count>0)
	{
		while (count--)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	char arr[] = "abcxxxxxx";
	my_strncpy(arr, "fgh", 6);
	printf(arr);
	return 0;
}




char* my_strncat(char *dest, const char *src, int count)
{
	//����dest�Ѿ��仯����Ҫ��һ������ķ���ֵ
	char *ret = dest;
	assert(src && dest);
	while (*dest)
	{
		*dest++;
	}
	while (count && *src)
	{
		*dest++ = *src++;
		count--;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char arr[20] = "hello ";
	my_strncat(arr, "world", 5);
	printf(arr);
	return 0;
}



int my_strncmp(const char *arr, const char *arr1, int count)
{
	//�˴������ص�ַ�������¼
	assert(arr && arr1);
	while (count && (*arr == *arr1))
	{
		if (arr1 == '\0')
			return 0;
		arr++;
		arr1++;
		count--;
	}
	return *arr - *arr1;
}

int main()
{
	int ret = 0;
	char arr[] = "abcd";
	char arr1[] = "abcde";
	ret = my_strncmp(arr, arr1, 5);
	printf("%d", ret);
	return 0;
}
