class Solution {
public:
    ListNode* AddTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rtn = new ListNode((l1->val + l2->val) % 10);
        ListNode* p = rtn;
        int rmd = (l1->val + l2->val) / 10;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != NULL || l2 != NULL) {
            p->next = new ListNode(rmd);
            p = p->next;
            if (l1 != NULL) {
                p->val += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                p->val += l2->val;
                l2 = l2->next;
            }
            rmd = p->val / 10;
            p->val = p->val % 10;
        }
        if (rmd > 0) {
            p->next = new ListNode(rmd);
        }
        return rtn;
    }
};
