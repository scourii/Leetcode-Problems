class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* current=head;
        ListNode* next;
        
        while (current != NULL)
        {
            next = current->next;
            current->next=previous;
            previous=current;
            current=next;
        }
        return previous;
    }
};
