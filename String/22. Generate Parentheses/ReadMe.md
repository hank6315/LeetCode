# 22. Generate Parentheses
###### tags: `String` `BackTracking`


Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:

	[
		"((()))",
		"(()())",
		"(())()",
		"()(())",
		"()()()"
	]


## Solution

也是backtracking題

主要概念是
- n等於`(`的數量，m等於`)`的數量  
- 若 m > 0 時，新增一個`)`時，m - 1
- 若 n > 0 時，新增一個`(`時，n - 1，但也必須多一個`)`把ㄊ他關起來，所以需要m + 1  