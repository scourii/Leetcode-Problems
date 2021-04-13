class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Checks if the upcoming values are null
        if(head == nullptr) 
            return head;
        if(head->next == nullptr)
            return head;
        ListNode* next = deleteDuplicates(head->next);
        
        if (next != nullptr && head->val == next->val) // if next doesn't equal null, and the next value in head == the current value in head.
            head->next = next->next;
        return head;
    }
};
