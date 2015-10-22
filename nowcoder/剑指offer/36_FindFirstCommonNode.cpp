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
    ListNode* FindFirstCommonNode( ListNode *pHead1, ListNode *pHead2) {
        if (pHead1 == NULL || pHead2 == NULL)
            return NULL;
        
        /*//方法1：根据链表长度，让较长的链表从距离表尾 较短链表长度 的位置开始走，使它们同时到达表尾
        auto help1 = pHead1, help2 = pHead2;
        int lengthA = 0, lengthB = 0, len = 0;
        
        //统计表长
        while (help1 != NULL) {
            ++lengthA;
            help1 = help1->next;
        }
        while (help2 != NULL) {
            ++lengthB;
            help2 = help2->next;
        }
        //计算表长的差
        len = lengthA - lengthB;
        help1 = pHead1;
        help2 = pHead2;
        //移动较长的表
        if (len < 0) {
            len = -len;
            while (len > 0) {
                help2 = help2->next;
                --len;
            }
        } else {
            while (len > 0) {
                help1 = help1->next;
                --len;
            }
        }
        //同时移动
        while (help1 != NULL && help2 != NULL) {
            if (help1 == help2)
                return help1;
            help1 = help1->next;
            help2 = help2->next;
        }*/
        
        //方法2：使用set
        set<ListNode *> help;
        
        //将表1的所有结点指针存入set中
        while (pHead1 != NULL) {
            help.insert(pHead1);
            pHead1 = pHead1->next;
        }
        //扫描表2，如果找到某结点在set中，说明是第一个公共结点
        while (pHead2 != NULL) {
            if (help.find(pHead2) != help.end())
                return pHead2;
            pHead2 = pHead2->next;
        }
        
        return NULL;
    }
};
