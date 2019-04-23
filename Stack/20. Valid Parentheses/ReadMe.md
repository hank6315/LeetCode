# 20. Valid Parentheses
###### tags: `Stack`

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

    Input: "()"
    Output: true
Example 2:

    Input: "()[]{}"
    Output: true
Example 3:

    Input: "(]"
    Output: false
Example 4:

    Input: "([)]"
    Output: false
Example 5:

    Input: "{[]}"
    Output: true


## Solution


消去法  
若要放入 `}` 時，上一個一定要等於`{`，以此類推

**Note** : 判斷empty一定要在s.top()前面
- 原因:若stack已經是empty()時，若判斷s.top()就會報錯