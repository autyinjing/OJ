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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        /*//解法1：扫描计数，再定位第k个结点，共扫描2次，但是会超时
        int count = 0;
        auto tmp = pListHead;
        
        //统计总结点个数
        while (tmp != NULL) {
            ++count;
        }
        if (count < k)
            return NULL;
        
        //定位倒数第k个结点
        for (int i = 0; i < count - k; ++i)
            tmp = tmp->next;
        return tmp;*/
        
        //解法2：使用两个指针，只扫描一次
        auto tmp = pListHead, ret = pListHead;
        
        for (int i = 0; (tmp != NULL) && (i < k - 1); ++i)
            tmp = tmp->next;
        if (tmp == NULL)
            return NULL;
        while (tmp->next != NULL) {
            tmp = tmp->next;
            ret = ret->next;
        }
        
        return ret;
    }
};
