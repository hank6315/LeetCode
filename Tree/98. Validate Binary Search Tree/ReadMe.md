# 98. Validate Binary Search Tree

###### tags: `Tree`


Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
```
Example 1:


Input:
    2
   / \
  1   3
Output: true
```

```
Example 2:

    5
   / \
  1   4
     / \
    3   6
Output: false
Explanation: The input is: [5,1,4,null,null,3,6]. The root node's value
             is 5 but its right child's value is 4.
```

## Solution

面試蠻會考的一題

BST主要概念如下
- 左子樹的所有節點一定會比root小，反之右子樹的節點一定會比root大

所以對於左子樹來說，若節點比root還大的話，就不是BST

核心代碼如下:

```cpp
 bool isValidBST(TreeNode* root, TreeNode* minNode , TreeNode* maxNode)
    {
        if(!root) return true;
        
        if(minNode && root -> val <= minNode -> val || maxNode && root -> val >= maxNode -> val) 
            return false;
        
        return isValidBST(root -> left , minNode , root) && isValidBST(root -> right , root , maxNode);
    }
```