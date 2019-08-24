#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	int a[3][4] = { 0 }; 
//	printf("%p\n", a[1]);
//	printf("%p\n", a[2]);
//	printf("%p\n", a[3]);
//	printf("%p\n", a[4]); 
//	printf("%p\n", a[10000]);
//	return 0;
//}
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//};
//int main()
//{
//	struct Test* p = 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int *)p +  0x1);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d", ret);
//}
//
//
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//	     	arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr,sz);
//	for (i = 0; i <=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int Find(int arr[3][3], int* prow, int* pcol,int k)
//{
//	int x = 0;
//	int y = *pcol - 1;
//	while (y >= 0 && x <= *prow - 1)
//	{
//	    /*右上角小于所求数，去掉一行
//		   右上角大于所求数，去掉一列
//		   左下角大于所求数，去掉一行
//		   左下角小于所求数，去掉一列*/
//			if(arr[x][y] > k)
//			{
//				y--;
//			}
//			else if(arr[x][y] < k)
//			{
//	        	x++;
//			}
//			else
//			{
//				*prow = x;
//				*pcol = y;
//				return;
//			}
//		}
//		*prow = -1;
//		*pcol = -1;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int row = 3;
//	int col = 3;
//	int k = 7;
//	Find(arr, &row, &col,k);
//	return 0;
//}



//void Revolve(char* arr,int k,int sz)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int j = 0;
//    int tmp = 0;
//	while (k)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			if (i < sz - 1)
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		k--;
//	}
//	for (j = 0; j < sz; j++)
//	{
//		printf("%c", arr[j]);
//	}
//}
//int main()
//{
//	int num = 0;
//	char arr[] = "AABCD";
//	/*int sz = sizeof(arr) / sizeof(arr[0]) - 1;*/
//	int sz = strlen(arr);
//	printf("左旋几个字符:\n");
//	scanf("%d", &num);
//	Revolve(arr,num,sz);
//	return 0;
//}



int Judge_Revolve(char* arr,char* arr1,int sz)
{
	assert(arr != NULL);
	int i = 0;
	int tmp = 0;
	int len = sz;
	while (sz - 1)
	{
		for (i = 0; i < sz; i++)
		{
			while (i < len - 1)
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				i++;
			}
		}
		if (strcmp(arr, arr1) == 0)
	    {
		    return 1;
		}
		sz--;
	}
	return 0;
}
int main()
{
	char arr[] = "AABCD"; 
	char arr1[] = "BCDAA";
	int sz = strlen(arr);
	int ret = 0;
	ret = Judge_Revolve(arr,arr1,sz);
	if (ret == 1)
	{
		printf("是旋转之后的字符串\n");
	}
	else
	{
		printf("不是旋转之后的字符串\n");
	}
	return 0;
}