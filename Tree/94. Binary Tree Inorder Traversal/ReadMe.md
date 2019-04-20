## 94. Binary Tree Inorder Traversal

### Solution

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