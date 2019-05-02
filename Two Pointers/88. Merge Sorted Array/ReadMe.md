# 88. Merge Sorted Array
###### tags: `Array` `Two Pointers`

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

    Input:
    nums1 = [1,2,3,0,0,0], m = 3
    nums2 = [2,5,6],       n = 3

    Output: [1,2,2,3,5,6]


## Solution

我們可以從num2跟num1的尾巴來開始一個一個比較，把較大的數字放在num的尾巴。


比較要注意個是，當循環結束後有可以i or j 還是大於等於0，但因為i本來就在放在num1裡面，所以不用理他，只要針對j的數組再把數字放入num1就好