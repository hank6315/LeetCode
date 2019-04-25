# 3. Longest Substring Without Repeating Characters
###### tags: `String`


Given a string, find the length of the longest substring without repeating characters.

Example 1:

	Input: "abcabcbb"
	Output: 3 
	Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
```
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:
```
Input: "pwwkew"
```
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
```


## Solution

**雙指針**

利用`vector<int>res(255,-1)` 來模擬hash表
我們根據res[s[[i]]去update目前的position
然後計算目前位置的lingest substring後，在update res[s[i]]