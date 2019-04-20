## 142. Linked List Cycle II

### Solution
這題是要找cycle的進入點


想法如圖
![](https://github.com/hank6315/LeetCode/blob/master/LinkList/142.%20Linked%20List%20Cycle%20II/pic.jpg)
一樣是快慢指針得概念

當slow 走一步時，fast會走兩步
第一步
- slow = A -> B
- fast = A -> B -> C

第二步
- slow = B -> C
- fast = C -> B -> C

C點代表slow跟fast 相遇的地方

因fast = 2 slow
所以可以想成

A -> B -> C = A -> B -> C ->B ->C
- 2(1 + 2) = 1 + 2 + 3 + 2

- 1 = 3

所以當slow = fast的時候，可以判斷A -> B 是否等於 C -> B
若等於的時候 B就是進入點


