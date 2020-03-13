#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<stdbool.h>
using namespace std;
//https://leetcode-cn.com/problems/super-egg-drop/ 887.��������
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
//https://leetcode-cn.com/problems/merge-two-sorted-lists/ 21.�ϲ�������������
//�õݹ��˼�룬�ж�l1��l2��ͷ��һ��ֵ��С����������Ϊͷ��ʼ������next�ͻ��Ϊ�µ�ͷ��Ȼ�󲻶ϱȽ�ͷ���Ĵ�С���γ���
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
//https://leetcode-cn.com/problems/merge-sorted-array/ 88.�ϲ�������������
//�ϲ�������
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	for (int i = 0; i < nums2.size(); ++i)
	{
		nums1[m + i] = nums2[i];
	}
	sort(nums1.begin(), nums1.end());
}
//�Ӻ���ǰ�����������飬�������ţ�����nums2ʣ���Ԫ�ط���ǰ�棨����еĻ���
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
//https://leetcode-cn.com/problems/search-a-2d-matrix-ii/ 240.������ά���� II
//ȡ����Ԫ������Ƚϣ�����target��ȥһ�ţ�С��target��ȥһ��
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
//https://leetcode-cn.com/problems/majority-element/ 169.����Ԫ��
//��ָoffer������ʱ�临�Ӷ�o(n)��
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
//�����򷨣�ͬʱ�����������Ȼ����������м䣬��ֱ�������
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
//https://leetcode-cn.com/problems/single-number/ 136.ֻ����һ�ε���
//��򷨣������ٶ���ռ䣩(C/C++�Կ�)
int singleNumber(int *nums,int numsSize)
{
	int a = nums[0];
	for (int i = 0; i < numsSize - 1; ++i)
	{
		a ^= nums[i + 1];
	}
	return a;
}

//��ϣ��(C++������
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
//�������������Ƚϣ�(C����)
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;//��С������
	//return *(int *)b - *(int *)a;�Ӵ�С��
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
