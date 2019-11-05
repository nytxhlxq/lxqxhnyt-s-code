#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//36510
void insert_sort(int *arr, int *temp, int n)
{
	int i = 0;
	int k = 0;
	int final;
	int first = final = 0;
	temp[0] = arr[0];
	for (i = 1; i < n; i++) 
	{
		if (arr[i] < temp[first]) 
		{
			first = (first - 1 + n) % n;
			temp[first] = arr[i];
		}
		else if (arr[i] > temp[final]) 
		{
			final = (final + 1 + n) % n;
			temp[final] = arr[i];
		}
		else 
		{ 
			k = (final + 1 + n) % n;
			while (temp[((k - 1) + n) % n] > arr[i]) 
			{
				temp[(k + n) % n] = temp[(k - 1 + n) % n];
				k = (k - 1 + n) % n;
			}
			temp[(k + n) % n] = arr[i];
			final = (final + 1 + n) % n;
		}
	}
	for (k = 0; k < n; k++) 
	{
		arr[k] = temp[(first + k) % n];
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int *arr;
	int *temp;
	while (scanf("%d", &n) != EOF) 
	{
		arr = (int *)malloc(sizeof(arr)* n);
		temp = (int *)malloc(sizeof(temp)* n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		insert_sort(arr, temp, n);
		for (i = 0; i < n; i++)
		{
            printf("%d ", arr[i]);
		}	
		printf("\n");
		free(arr);
		free(temp);
	}
	return 0;
}