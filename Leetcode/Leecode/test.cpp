#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//https://leetcode-cn.com/problems/majority-element/ 169.多数元素
//剑指offer方法（时间复杂度o(n)）
int majorityElement(int* nums, int numsSize)
{
	int tmp = nums[0];
	int count = 1;
	for (int i = 1; i < numsSize; ++i)
	{
		if (nums[i] == tmp)
			count++;
		else if (count == 0)
		{
			tmp = nums[i];
			count = 1;
		}
		else
			count--;
	}
	return tmp;
}
//简单排序法（同时排序后众数必然在数组的最中间，可直接输出）
int majorityElement(vector<int>& nums)
{
	int num = 0;
	if (nums.size() == 1)
		return nums[0];
	int count = 1;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			count++;
			if (count >(nums.size() / 2))
			{
				num = nums[i];
				break;
			}
		}
	}
	return num;
}
void main()
{
	vector<int> nums = {2,2,1,1,1,2,2};
	int ret = majorityElement(nums);
	cout << ret << endl;
	system("pause");
}
//https://leetcode-cn.com/problems/single-number/ 136.只出现一次的数
/*
//异或法（不开辟额外空间）(C/C++皆可)
int singleNumber(int *nums,int numsSize)
{
	int a = nums[0];
	for (int i = 0; i < numsSize - 1; ++i)
	{
		a ^= nums[i + 1];
	}
	return a;
}

//哈希法(C++方法）
int singleNumber(vector<int>& nums) 
{
	map<int, int> m;
	for (int i = 0; i<nums.size(); i++)
	{
		if (m.find(nums[i]) != m.end())
		{
			m.erase(m.find(nums[i]));
		}
		else
		{
			m[nums[i]] = 1;
		}
	}
	return m.begin()->first;
}
//暴力法（排序后比较）(C方法)
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;//从小到大排
	//return *(int *)b - *(int *)a;从大到小排
}
int singleNumber(int* nums,int numsSize)
{
	qsort(nums, numsSize, sizeof(int), cmp);
	for(int i = 0; i <= numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
			i++;
		else
			return nums[i];
	}
	/*
	for (int i = numsSize - 1; i >= 1; i--)
	{
		if (nums[i] == nums[i - 1])
			i--;
		else
			return nums[i];
	}
	
}

void main()
{
	//vector<int>& nums = { 2,2,1 };
	int nums[] = { 2, 2, 1 };
	int numsSize = sizeof(nums) / sizeof(int);
	int ret = singleNumber(nums, numsSize);
	cout << ret << endl;
	system("pause");
}
*/