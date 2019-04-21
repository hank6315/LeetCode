# 263. Ugly Number
###### tags: `Math`

Write a program to check whether a given number is an ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.

Example 1:

    Input: 6
    Output: true
    Explanation: 6 = 2 × 3
Example 2:

    Input: 8
    Output: true
    Explanation: 8 = 2 × 2 × 2
Example 3:

    Input: 14
    Output: false 
    Explanation: 14 is not ugly since it includes another prime factor 7.
    
# Solution

質因數包含 2, 3, 5

 - 4其實可以不用理他因為也等於(2 x 2),在2的時候就會被除了

確認給的數字能否被這三個數字整除到 1 即可。