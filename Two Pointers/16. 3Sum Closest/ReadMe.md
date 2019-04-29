# 16. 3Sum Closest
###### tags: `Array`

Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

Example:

	Given array nums = [-1, 2, 1, -4], and target = 1.

	The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
	
	

## Solution

是15. 3Sum的進階版

- 我們要確保當前三個數字跟target的差距最小
- 一開始先用一個diff紀錄完後
```cpp
    int closest = nums[0] + nums[1] + nums[2];
    int diff = abs(closest - target);
```

- 在裡面一樣也是用兩個指針去算值，而算出newDiff
- 若diff 比 newDiff還大代表newDiff比較接近tatget(後面找的三數和比較接近sum)
- 而更新diff為newDiff，sum為比較接近target的值(closest)
```cpp
while(left < right)
{
    int sum = nums[i] + nums[left] + nums[right];
    int newDiff = abs(sum - target);
    if (diff > newDiff) {
        diff = newDiff;
        closest = sum;
    }
    if (sum < target)
     ++left;
    else 
    --right;
}

```
- 記得要去更新目前left跟right的值