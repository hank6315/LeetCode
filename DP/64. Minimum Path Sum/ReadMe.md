# 64. Minimum Path Sum
###### tags: `Array` `Dymanic Programing`

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

    Input:
    [
      [1,3,1],
      [1,5,1],
      [4,2,1]
    ]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.

## Solution

- 先求邊界
- 從[1,1]開始計算

可以求得最小值為
```
 grid[i][j] = min(grid[i-1][j] , grid[i][j-1]) + grid[i][j];
 ```