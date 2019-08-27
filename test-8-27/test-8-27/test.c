#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void move_self(char* left, char* right)
{
	int tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr1,int k)
{
	int ret = strlen(arr1);
	move_self(arr1,arr1 + k - 1);
	move_self(arr1 + k,arr1 + ret - k + 1);
	move_self(arr1,arr1 + ret - k + 1);
}
int main()
{
	int k = 0;
	printf("输入旋转的字符数：\n");
	scanf("%d", &k);
	char arr[10] = "ABCDEF";
	left_move(arr,k);
	printf("%s", arr);
	return 0;
}