# 152. Maximum Product Subarray
###### tags: `Array`

Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.
```
Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
```

## Solution
### time complexity : O(N)

每次都要保存累乘最大值或最小值

```cpp
int a = maxval * nums[i];
int b = minval * nums[i];
            
```
同時還有一個選擇起點的邏輯，如果之前的最大和最小值同當前元素相乘之後，沒有當前元素大（或小）那麼當前元素就可作為新的起點。

```cpp
maxval = max(max(a,b) , nums[i]);
minval = min(min(a,b), nums[i]);
```