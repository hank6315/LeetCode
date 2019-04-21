# 94. Binary Tree Inorder Traversal
###### tags: `Tree`

Given a binary tree, return the inorder traversal of its nodes' values.

Example:
```
	Input: [1,null,2,3]
		  1
		    \
		      2
		    /
		  3
	Output: [1,3,2]
```
Follow up: Recursive solution is trivial, could you do it iteratively?

## Solution

**左根右** 方法 - Stack

架構如下

```cpp
while(!s.empty() || root != NULL)
        {
            if(root != NULL)
            {
                s.push(root);
                root = root -> left;
            }
            else
            {
                root = s.top();
                s.pop();
                res.push_back(root -> val);
                root = root -> right;
            }
                
        }
```