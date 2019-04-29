# 75. Sort Colors

###### tags: `Sort`

Given an array with _n_ objects colored red, white or blue, sort them **[in-place](https://en.wikipedia.org/wiki/In-place_algorithm) **so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

**Note:** You are not suppose to use the library's sort function for this problem.

**Example:**

**Input:** \[2,0,2,1,1,0\]
**Output:** \[0,0,1,1,2,2\]

**Follow up:**

-   A rather straight forward solution is a two-pass algorithm using counting sort.  
    First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
-   Could you come up with a one-pass algorithm using only constant space?


## Solution

難的在於如何in place實現  

基本想法是建立兩個指針

```cpp
 int bound0 = 0, bound2 = nums.size() - 1;
```

當遇到2號球，便和bound2指針做交換，遇到一號球就繼續，遇到0號球就跟bound0指針做交換

比較難理解在於若當前的num是2的話，交換後 bound2要-1，反之當num為0時，bound0要+1
```cpp
while(nums[i] == 2 && i < bound2)
{
    swap(nums[i] , nums[bound2]);
    bound2 --;
}

while(nums[i] == 0 && i > bound0)
{
    swap(nums[i], nums[bound0]);
    bound0 ++;
}
```