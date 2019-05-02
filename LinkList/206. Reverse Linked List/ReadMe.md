# 206. Reverse Linked List
###### tags: `Link List`

Reverse a singly linked list.

Example:

    Input: 1->2->3->4->5->NULL
    Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?


## Solution

先建立一個空的newhead，然後從head開始，建立一個temp，是head -> next  
將之後的節點指向newhead，重複操作直到head成為最後節點為止

```cpp
while(head)
{
    ListNode* temp = head->next;
    head -> next = newhead;
    newhead = head ;
    head = temp;
}
```