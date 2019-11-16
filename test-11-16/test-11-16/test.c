#define _CRT_SECURE_NO_WARNINGS 1


//////剑指offer题（牛客：删除链表中重复的节点）
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
*/
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
			return pHead;
		ListNode *pre = NULL;
		ListNode *ph = pHead;
		ListNode *q = NULL;
		while (ph != NULL)
		{
			if (ph->next != NULL && ph->next->val == ph->val)
			{
				q = ph->next;
				while (q != NULL && q->next != NULL && q->next->val == ph->val)
				{
					q = q->next;
				}
				if (ph == pHead)
				{
					pHead = q->next;
				}
				else
				{
					pre->next = q->next;
				}
				ph = q->next;
			}
			else
			{
				pre = ph;
				ph = ph->next;
			}
		}
		return pHead;
	}
};