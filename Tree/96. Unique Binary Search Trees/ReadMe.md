# 96. Unique Binary Search Trees
###### tags: `Tree`

Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

Example:

Input: 3
Output: 5
Explanation:
Given n = 3, there are a total of 5 unique BST's:

       1         3     3      2      1
        \       /     /      / \      \
         3     2     1      1   3      2
        /     /       \                 \
       2     1         2                 3
       
## Solution

對於任意以i為根的二元樹

- 左子樹的值一定小於i [0 , i-1]
- 右子樹的值一定大於i [i + 1 , n]

假設左子樹有m種排列，右子樹有n種排列，那麼以i子樹為根的二元樹的排列方式就是m x n

若以dp[i]表示則

```
dp[i] = sum (dp[k] , dp[i - k - 1]) 0 <= k < i
```