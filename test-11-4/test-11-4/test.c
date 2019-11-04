#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


void TwoWayInsertSort(int *arr, int left, int right)
{
	int n
	int i = 0;
	int arr1[10] = arr[10];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < arr1[first])
		{
			first = (first - 1) % n;
		}
	}
}
int main()
{
	int left = 0;
	int right = 0;
	int arr[10] = { 0, 2, 4, 5, 6, 9, 5, 3, 7, 1 };
	TwoWayInsertSort(&arr, left, right);
}