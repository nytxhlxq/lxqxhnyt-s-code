#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src--)
//	{
//		;
//	}
//	return ret;
//}
//
//char* my_strstr(const char*str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char*cp = (char*)str1;
//	char*substr = (char*)str2;
//	char* s1 = NULL;
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//}
//
//int my_strcmp(const char* src, const char* dst)
//{
//	int ret = 0;
//	assert(src != NULL);
//	assert(dst != NULL);
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
//	{
//		++src;
//		++dst;
//	}
//	if (ret < 0)
//	{
//		ret = -1;
//	}
//	else if (ret > 0)
//	{
//		ret = 1;
//	}
//	return (ret);
//}
//
//void my_memcpy(void* dst, const void* src, size_t count)
//{
//	void* ret = dst;
//	assert(dst);
//	assert(src);
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return (ret);
//}
//
//void* memmove(void* dst, const char* src, size_t count)
//{
//	void* ret = dst;
//	if (dst <= src || (char*)dst >= ((char*)src + count))
//	{
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		dst = (char*)dst - 1;
//		src = (char*)src - 1;
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return (ret);
//}
//
//
//char my_strchr(char *str, char a)
//{
//	assert(str != NULL);
//	while (*str)
//	{
//		if (*str == a)
//		{
//			return str;
//		}
//		else
//			*str++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[20] = "abcdedef";
//	char b = 'c';
//	char *ret;
//	ret = my_strchr(arr, b);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
