/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        /*//直接翻转整个链表,再导入容器；
        ListNode *tmp_head = new ListNode(0), *tmp = head;
        vector<int> ret;
        
        while (tmp != NULL) {
            head = head->next;
            tmp->next = tmp_head->next;
            tmp_head->next = tmp;
            tmp = head;
        }
        
        tmp = tmp_head->next;
        while (tmp != NULL) {
            ret.push_back(tmp->val);
            tmp = tmp->next;
        }*/
        
        //或者直接导入容器，然后逆序
        vector<int> ret;
        auto tmp = head;
        
        while (tmp != NULL) {
            ret.push_back(tmp->val);
            tmp = tmp->next;
        }
        reverse(ret.begin(), ret.end());
        
        return ret;
    }
}
