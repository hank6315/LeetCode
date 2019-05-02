# 73. Set Matrix Zeroes
###### tags: `Array`
Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

Example 1:
```
Input: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
```
Example 2:
```
Input: 
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
Output: 
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
```

## Solution

解題步驟如下

- 先掃描第一行跟第一列，若有0出現的話，先把各自flag設為true
- 然後掃描除了第一行跟第一列以外，若有0的話，則把對應的第一行跟列都設為0
- 之後再掃一次除了第一行跟第一列以外，若對應的第一行或第一列有0的話，則把該值也設為0
- 最後根據一開始的flag，若為true的話也把整列或整行設為0