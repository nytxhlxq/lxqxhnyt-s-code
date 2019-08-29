#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strncpy(char* dest,const char* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (count)
	{
		*(dest) = *(src);
		src++;
		dest++;
		count--;
	}
	if (count>0)
	{
		while (--count)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	char arr[5] = "abcde";
	char arr1[5] = "fgh";
	my_strncpy(arr, arr1, 3);
	printf(arr);
	return 0;
}

//int main()
//{
//	int i = 0;
//	char arr[] = "abcde";
//	char arr1[] = "fgh";
//	strncpy(arr, arr1, 5);
//	printf("%s", arr[i]);
//}

//char* my_strncpy(char *des, const char *src, int count)
//{
//	char *cp = des;
//	assert(src && des);
//	while (count && (*des++ = *src++))
//	{
//		count--;
//	}
//	if (count>0)
//	{
//		while (--count)
//		{
//			*des++ = '\0';
//		}
//	}
//	return cp;
//}
//
//int main()
//{
//	char string[80] = { 0 };
//	int len = strlen("hello");
//	printf("String = %s\n", my_strncpy(string, "Hello", len));
//	system("pause");
//	return 0;
//}



char* strncat(char *des, const char *src, int count)
{
	char *cp = des;
	assert(src && des);
	while (*des != '\0')
	{
		*des++;
	}
	while (count && *src)
	{
		*des++ = *src++;
		count--;
	}
	*des = '\0';
	return cp;
}

int main()
{
	char arr[20] = "hello";
	int len = strlen(arr);
	char *ret = my_strncat(arr, arr, len);
	printf("%s", ret);
	system("pause");
	return 0;
}



int my_strncmp(const char *arr1, const char *arr2, int count)
{
	assert(arr1 && arr2);
	while (count && (*arr1 == *arr2))
	{
		if (arr1 == '\0')
			return 0;
		arr1++;
		arr2++;
		count--;
	}
	return *arr1 - *arr2;
}

int main(void)
{
	char *arr1 = "abcd";
	char *arr2 = "abcde";
	int len = strlen(arr1);
	int ret = my_strncmp(arr1, arr2, len);
	printf("%d\n", ret);
	system("pause");
}



