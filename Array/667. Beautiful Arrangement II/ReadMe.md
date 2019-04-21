# 667. Beautiful Arrangement II
###### tags: `Array`

Given an array with n integers, your task is to check if it could become non-decreasing by modifying at most 1 element.

We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (1 <= i < n).

Example 1:

Input: [4,2,3]

Output: True

Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
Example 2:

Input: [4,2,1]

Output: False

Explanation: You can't get a non-decreasing array by modify at most one element.
Note: The n belongs to [1, 10,000].

## Solution
題目大意: 給我們一個數N以及K，找出一種排列使得數列兩個數的差絕對值正好有K個

example : n = 5

```
1,2,3,4,5
```
若是有序的絕對值正好相差為1

但如果為

```
1 5 2 4 3
```
絕對值 等於 4 3 2 1 所以K值最大為n - 1

所以我們可以先從這種最大最小的先排，若最後k等於1時，在按照順序排