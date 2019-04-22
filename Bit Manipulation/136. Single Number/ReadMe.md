# 136. Single Number
###### tags: `Bit Manipulation`

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

    Input: [2,2,1]
    Output: 1
Example 2:

    Input: [4,1,2,1,2]
    Output: 4

## Solution

當初看到解法覺得非常神奇

竟然可以利用bit特性(xor)來求出答案
- 相同為0，不同為1
