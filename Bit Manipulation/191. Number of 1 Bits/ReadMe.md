## 191. Number of 1 Bits

###### tags: `Bit Manipulation`

Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Example 1

    Input: 11
    Output: 3
    Explanation: Integer 11 has binary representation 00000000000000000000000000001011 
    
## Solution

算出一個數的1有幾個，因二進字都是0 or 1 ，一樣可以可以透過bit往右位移一bit後，跟1 &是否為1 or 0來計數1的次數