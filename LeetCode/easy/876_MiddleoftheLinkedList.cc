/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //遍历两次
        int len = 0;
        auto p = head;
        while (p) {
            ++len;
            p = p->next;
        }
        int move_cnt = len / 2;
        p = head;
        while (move_cnt--)
            p = p->next;
        return p;
    }
};
