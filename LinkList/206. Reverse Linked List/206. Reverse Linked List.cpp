class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        ListNode* newhead = NULL;
        
        while(head)
        {
            ListNode* temp = head->next;
            head -> next = newhead;
            newhead = head ;
            head = temp;
        }
        
        return newhead;
    }
};