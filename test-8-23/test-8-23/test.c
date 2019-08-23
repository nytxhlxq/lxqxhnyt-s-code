//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////无漏洞写法
//int Ave(int x, int y)
//{
//	if (x > y)
//	{
//		return y + (x - y) / 2;
//	}
//	else
//	{
//		return x + (y - x) / 2;
//	}
//}
////位运算（分相同位和不同位）
//int Ave(int x, int y)
//{
//	return (x & y) + ((x ^ y) >> 1);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入两个数:\n");
//	scanf("%d %d", &a, &b);
//	ret = Ave(a, b);
//	printf("%d", ret);
//	return 0;
//}
//#include<math.h>
//unsigned int reverse_bit(unsigned int x)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += (x & 1) * (int)pow(2, (31 - i));
//		x = x >> 1;
//	}
//	return sum;
//}
//int main()
//{
//    int ret = 0;
//	unsigned int a = 25;
//	ret = reverse_bit(a);
//	printf("%u", ret);
//	return 0;
//}
//
//
//int Check(int* arr)
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 1; j < 9 - i; j++)
//		{
//			if ((arr[i] ^ arr[i + j]) == 0)
//			{
//				arr[i] = 0;
//				arr[i + j] = 0;
//			}
//		}
//	}
//	for(k = 0; k < 9; k++)
//	{
//		if (arr[k] != 0)
//			num = arr[k];
//	}
//	return num;
//}
//int main()
//{
//	int ret = 0;
//	int arr[9] = { 2,5,6,8,4,5,2,8,4, };
//	ret = Check(arr);
//	printf("%d", ret);
//	return 0;
//}
//
//
//
//#include<string.h>
//#include<assert.h>
//void reverse(char *start, char *end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//
//void reverse_str(char *str, int sz)
//{
//	assert(str);               
//	char *str1 = str;
//	char *left = str;
//	char *right = str + sz - 1;
//	reverse(left, right);         
//	while (*str1)
//	{
//		left = str1;
//		while ((*str1 != '\0') && (*str1 != ' ')) 
//		{
//			str1++;
//		}
//		right = str1 - 1;               
//		reverse(left, right);               
//		if (*str1 == ' ')             
//		{
//			str1++;
//		}
//	}
//}
//
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = strlen(arr);
//	reverse_str(arr, sz);
//	printf("%s", arr);
//	getchar();
//	return 0;
//}