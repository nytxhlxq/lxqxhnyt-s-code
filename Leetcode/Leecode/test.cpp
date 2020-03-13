#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<stdbool.h>
using namespace std;
//https://leetcode-cn.com/problems/super-egg-drop/ 887.鸡蛋掉落
int superEggDrop(int K, int N)
{
	vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
	int m = 0;
	while (dp[m][K] < N)
	{
		m++;
		for (int k = 1; k <= K; ++k)
			dp[m][k] = dp[m - 1][k - 1] + dp[m - 1][k] + 1;
	}
	return m;
}
//https://leetcode-cn.com/problems/merge-two-sorted-lists/ 21.合并两个有序链表
//用递归的思想，判断l1和l2的头哪一个值更小，就让它作为头开始，它的next就会成为新的头，然后不断比较头结点的大小，形成链
 struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		if (l1 == NULL)
			return l2;
		if (l2 == NULL)
			return l1;
		if (l1->val < l2->val)
		{
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
	}
};
//https://leetcode-cn.com/problems/merge-sorted-array/ 88.合并两个有序数组
//合并再排序
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	for (int i = 0; i < nums2.size(); ++i)
	{
		nums1[m + i] = nums2[i];
	}
	sort(nums1.begin(), nums1.end());
}
//从后向前遍历两个数组，大的往后放，最后把nums2剩余的元素放最前面（如果有的话）
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int n1 = m - 1;
	int n2 = n - 1;
	int n3 = n + m - 1;
	while (n1 >= 0 && n2 >= 0)
	{
		nums1[n3--] = nums1[n1] > nums2[n2] ? nums1[n1--] : nums2[n2--];
	}
	while (n2 >= 0)
	{
		nums1[n3--] = nums2[n2--];
	}
}
//https://leetcode-cn.com/problems/search-a-2d-matrix-ii/ 240.搜索二维矩阵 II
//取左下元素逐个比较，大于target减去一排，小于target减去一列
bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target)
{
	if (matrixRowSize == 1 && matrixColSize == 1)
	{
		if (matrix[0][0] == target)
			return true;
		else
			return false;
	}
	int i = 0;
	int j = matrixColSize - 1;
	while (i <= matrixRowSize - 1 && j >= 0)
	{
		if (target > matrix[matrixRowSize - 1 - i][matrixColSize - 1 - j])
			j--;
		else if (target < matrix[matrixRowSize - 1 - i][matrixColSize - 1 - j])
			i++;
		else
			return true;
	}
	return false;
}
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
	*/
	
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
