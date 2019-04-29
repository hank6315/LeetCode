# 53. Maximum Subarray
###### tags: `Array`

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

    Input: [-2,1,-3,4,-1,2,1,-5,4],
    Output: 6
    Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


## Solution

初始化兩筆資料  
ans - 用來判斷maxumun，初始化為nums[0]  
sum - 累加每一筆array資料  

```cpp
sum+=nums[i];
ans=max(sum,ans);
sum=max(sum,0);
```