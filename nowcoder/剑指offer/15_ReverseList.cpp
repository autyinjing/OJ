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
    ListNode* ReverseList(ListNode* pHead) {
        //使用头插法翻转链表
        ListNode tmp_head(0);
        auto tmp = pHead;
        
        while (tmp != NULL) {
            pHead = pHead->next;
            tmp->next = tmp_head.next;
            tmp_head.next = tmp;
            tmp = pHead;
        }
        return tmp_head.next;
    }
};
