# 268. Missing Number

###### tags: `Array` `Bit Manipulation` `Math`

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

    Input: [3,0,1]
    Output: 2
Example 2:

    Input: [9,6,4,2,3,5,7,0,1]
    Output: 8
Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?


## Solution

using XOR  

跟136題方法一樣，只不過這題需要一個輔助count來判斷到底是缺哪個數，而這個count會從0開始

核心代碼如下

```cpp
for(int num:nums)
{
    result ^= num;
    result ^= i;
    i++;
}
```
