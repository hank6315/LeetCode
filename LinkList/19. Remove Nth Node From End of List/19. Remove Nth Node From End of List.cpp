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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head) return NULL; 
        
        ListNode dummy(0);
        ListNode* pre = &dummy;
        dummy.next = head;
        
        ListNode* cur = head;
        int len = 0;
        while(cur != NULL)
        {
            len ++;
            cur = cur -> next;
        }
        
        len -= n;
        
        cur = pre;
        
        while(len > 0)
        {
            len --;
            cur = cur -> next;
        }
        
        cur -> next = cur -> next -> next;
        
        
        return dummy.next;
        
    }
};