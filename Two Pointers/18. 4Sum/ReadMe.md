# 18. 4Sum
###### tags: `Array`

Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

Note:

The solution set must not contain duplicate quadruplets.

Example:

	Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

	A solution set is:
	[
		[-1,  0, 0, 1],
		[-2, -1, 1, 2],
		[-2,  0, 0, 2]
	]


## Solution

原理跟[15. 3Sum](/ocq1SV5XTe2ZedKayVoLig?view)

只是多加一個for 而已
- 10,13行判斷第一數以及第二數不能重複

```cpp
for(int i = 0 ; i < nums.size(); i++)
{
    if( i>0 && nums[i] == nums[i-1]) continue;
    for(int j = i + 1 ; j < nums.size(); j++)
    {
        if((j > i + 1) && nums[j] == nums[j-1]) continue;
        int left = j + 1 , right = nums.size() - 1;
    }
}   

```