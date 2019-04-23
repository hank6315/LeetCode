# 33 Search in Rotated Sorted Array I 
###### tags: `Binary Search`

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

## Solution

：0 1 2 4 5 6 7
情况1：  6 7 0 1 2 4 5    起始元素0在中間的左邊
情况2：  2 4 5 6 7 0 1    起始元素0在中間的右邊

如果要找0的話，有可能在mid的左邊以及右邊

當A[mid] < A[end] < A[start]：情況1，
右半序列A[mid+1 : end] sorted
A[mid] < target <= A[end], 右半排序

當A[mid] > A[start] > A[end]：情况2，
左半序列A[start : mid-1] sorted
A[start] <= target < A[mid], 左半排序
