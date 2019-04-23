# 659. Split Array into Consecutive Subsequences
###### tags: `Greedy`

You are given an integer array sorted in ascending order (may contain duplicates), you need to split them into several subsequences, where each subsequences consist of at least 3 consecutive integers. Return whether you can make such a split.

**Example 1:**   
**Input:** \[1,2,3,3,4,5\]  
**Output:** True  

**Explanation:**  
You can split them into two consecutive subsequences :

1, 2, 3  
3, 4, 5

**Example 2:**   

**Input:** \[1,2,3,3,4,4,5,5\]    
**Output:** True    
**Explanation:**    
You can split them into two consecutive subsequences :   
1, 2, 3, 4, 5  
3, 4, 5  

**Example 3:**    
**Input:** \[1,2,3,4,4,5\]  
**Output:** False  

**Note:**  

1.  The length of the input is in range of \[1, 10000\]

## Solution
cnt - 紀錄每個數字出現的次數  
tail - 紀錄以某個數字結尾的連續個數

第一次先把array裡面出現次數記錄到cnt裡面  
第二次把每一個數字做判斷  

- 如果**tail[n - 1] > 0**，代表有以**n - 1**為結尾的連續數列  
  所以我們把n-1添加到tail裡面，而**tail[n - 1]** 減去1

- 若t**ail[n - 1] == 0**，代表沒有尾巴，所以我們就拿n去判斷是否有連續數列可以包含**三個數**，所以檢查**cnt[n + 1]** and **cnt[n + 2]**是否有值，若沒有的話就return false，否則就新建**tail[n + 2]**(以n+ 2為尾巴的數列)
