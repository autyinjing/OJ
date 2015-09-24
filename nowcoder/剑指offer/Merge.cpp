/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode tmp_head(0);
        ListNode *tail = &tmp_head, *help = NULL;
        
        //使用尾插法合并链表
        while ((pHead1 != NULL) && (pHead2 != NULL)) {
            if (pHead1->val <= pHead2->val) {
                help = pHead1;
                pHead1 = pHead1->next;
            } else {
                help = pHead2;
                pHead2 = pHead2->next;
            }
            help->next = tail->next;
            tail->next = help;
            tail = tail->next;
        }
        
        //接上剩下部分
        if (pHead1 != NULL)
            tail->next = pHead1;
        if (pHead2 != NULL)
            tail->next = pHead2;
        
        return tmp_head.next;
    }
};
