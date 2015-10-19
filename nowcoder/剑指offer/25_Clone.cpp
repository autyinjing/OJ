/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == NULL)
            return NULL;
        RandomListNode *tmp = pHead, *help = NULL, *nhead = NULL;
        
        //将每个结点复制到它后面紧接的位置
        while (tmp != NULL) {
            help = new RandomListNode(tmp->label);
            help->next = tmp->next;
            tmp->next = help;
            tmp = tmp->next->next;
        }
        
        //复制随机指针
        tmp = pHead;
        while (tmp != NULL) {
            auto node = tmp->next;
            if (tmp->random != NULL)
                node->random = tmp->random->next;
            tmp = node->next;
        }
        
        //拆开两个链表
        tmp = pHead;
        nhead = pHead->next;
        while (tmp->next != NULL) {
            help = tmp->next;
            tmp->next = help->next;
            tmp = help;
        }
        
        return nhead;
    }
};
