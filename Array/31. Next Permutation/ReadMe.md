# 31. Next Permutation
###### tags: `Array`

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1


## Solution

TIP

- Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, the permutation is sorted in descending order, just reverse it to ascending order and we are done. For example, the next permutation of [3, 2, 1] is [1, 2, 3].
- Find the largest index l greater than k such that nums[k] < nums[l].
- Swap nums[k] and nums[l].
- Reverse the sub-array from nums[k + 1] to nums[nums.size() - 1].

example 

6 5 4 8 7 5 1

首先從後面看 1 < 5 , 5 < 7   
若要找到下一個排列必須要找到遞增位置  
因為在這裡才能讓整個數變大  
於是乎找到4 

```cpp
 for(k = n - 2; k >=0; k--)
{
    if(nums[k] < nums[k+1])
        break;
}
```

6 5 **4** 8 7 5 1  

而之後必須找到比4大，但必須在這些裡面找到比4大的最小值
並將兩數對調

6 5 **4** 8 7 **5** 1

6 5 **5** 8 7 4 1

最後再將 8741 做遞增

```cpp
for(l = n - 1; l > k; l--)
{
    if(nums[l] > nums[k])
        break;
}

swap(nums[l] , nums[k]);

reverse(nums.begin() + k + 1 , nums.end());
```