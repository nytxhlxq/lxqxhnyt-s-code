#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int majorityElement(int* nums, int numsSize)
{
	int num = 0;
	int i = 0;
	int count = 1;
	numsSize = sizeof(nums) / sizeof(int);
	if (numsSize == 1)
		return nums[0];
	qsort(nums, numsSize, sizeof(int), cmp);
	for (i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			count++;
			if (count >(numsSize / 2))
				num = nums[i];
		}
	}
	return num;
}
int main()
{
	int numsSize = 0;
	int nums[] = { 3, 2, 3 };
	int ret = majorityElement(nums, numsSize);
	printf("%d\n", ret);
	system("pause");
}
