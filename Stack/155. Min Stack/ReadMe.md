# 155. Min Stack
###### tags: `Stack`

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
```
Example:
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
```


## Solution

**Two Stack**

stack 1 - 儲存value.  
stack 2 - 儲存minvalue.

核心代碼下:

```cpp
 void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= s2.top())
            s2.push(x);
    }
    
void pop() {
    if (s1.top() == s2.top())  s2.pop();
    s1.pop();
}
```