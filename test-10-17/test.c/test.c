#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void FindNum(int arr[4][4],int x)
{

	int i = 0;
	int j = 0;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (x == arr[i][j])
			{
			    printf("�������\n");
				return;
			}
		}
	}
	printf("û�����\n");
}
int main()
{
	int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8, }, { 9, 10, 11, 12 }, {13,14,15,16} };
	int x = 17;
	FindNum(arr, x);
	return 0;
}

//Ҫ��ʱ�临�Ӷ�Ŷ0(row+rol)

void FindNum(int arr[4][4], int x)
{
	int col = 3;
	int row = 0;
	while (col >= 0)
	{
		if (arr[row][col] == x)
		{
			printf("�ҵ�\n");
			break;
		}
		else if (arr[row][col] > x)
			col--;
		else
			row++;
	}
	if (col < 0)
		printf("������\n");
	else
	{
		printf("%d\n", arr[row][col]);
		printf("%d %d",row,col);
	}
}
int main()
{
	int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8, }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	int x = 6;
	FindNum(arr, x);
	return 0;
}