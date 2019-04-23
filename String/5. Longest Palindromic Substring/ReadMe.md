# 5. Longest Palindromic Substring
###### tags: `String`


Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
```
Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: "cbbd"
Output: "bb"
```

## Solution 
### 時間 (n^2) 空間(1)



奇數可能為 bab(i,i)  
偶數可能為 baab(i,i+1)  

example abccbd  
i等於(2,2+1)  
left 會等於0 right會等於5  

```

三個就可以變成回文
ex. aba

aba
456

所以只要判斷right - left -1 > 0 (6-4-1) > 0 

abccbd
012345

start = left + 1(0+1)
maxLen = rigth - left - 1 = 4
```