## 98. Validate Binary Search Tree

### Solution

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