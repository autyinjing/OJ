class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *help = nullptr;
        while (head) {
            auto pn = head;
            head = head->next;
            pn->next = help;
            help = pn;
        }
        return help;
    }
};
