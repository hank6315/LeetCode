# 92. Reverse Linked List II
###### tags: `Link List`

Reverse a linked list from position m to n. Do it in one-pass.

Note: 1 ≤ m ≤ n ≤ length of list.

Example:
```
Input: 1->2->3->4->5->NULL, m = 2, n = 4
Output: 1->4->3->2->5->NULL
```


## Solution

對於linkiist的問題，一般來說都是要建立一個dummy node，然後指向head，原因是怕變動從head開始，這來一樣的話，就算head有變動的話，也可以透過dummy->next來取得head的list.

```cpp
ListNode dummy(0);
dummy.next = head;
ListNode* pre = &dummy;
```

以範例題目來說，變化是從第2跟第4節點之間，我們一開始需要先找到開始變化節點的前一個節點，所以我們只要讓pre走m-1步就好
(-1的原因是因為節點index是從1開始並不是從0開始，若是從0的話，那麼一開始pre就指向dummy了)

而2 -> 3 -> 4 的交換步驟如下 :

第一步就是把3放到1後面，再來就是把4放到1後面 
```
step 0 : 1 -> 2 -> 3 -> 4 -> 5 -> NULL

step 1 : 1 -> 3 -> 2 -> 4 -> 5 -> NULL

step 2 : 1 -> 4 -> 3 -> 2 -> 5 -> NULL
```

可以看到，只需要**n-m**個步驟而已  


一開始pre指向1，cur指向2，可以利用一個temp指向3，然後段開2->3這段，讓2的下一個節點(next)去指向4，然後再把3的的節點連到1的後面(pre->next)，最後再斷開1->2這段，讓節點1去連結點3
核心代碼如下

```cpp
for(int i = 0; i < n - m; i++)
{
    ListNode* temp = cur -> next;
    cur -> next = temp ->next;
    temp -> next = pre -> next;
    pre ->next = temp;
}
```

最後return的話為dummy.next (會指向head)