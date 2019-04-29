# 15. 3Sum
###### tags: `Array`

Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

    Given array nums = [-1, 0, 1, 2, -1, -4],

    A solution set is:
    [
      [-1, 0, 1],
      [-1, -1, 2]
    ]


## Solution

這題應該是雙指針的基本題，必須要會  

原先是使用DFS方法去寫但發現會TLE(test case最後一個跑不過)
思路跟[39. Combination Sum]是一樣的

```cpp=
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        int target = 0 , start = 0; 
        sort(nums.begin() , nums.end());
        threeSumDFS(nums , target , start, res , ans);
      return ans;
    }
    
    void threeSumDFS(vector<int>& nums , int target , int start , vector<int>& res , vector<vector<int>>& ans)
    {
        if((res.size() == 3 )&& target != 0 ) return;
        else if((res.size() == 3)  && target == 0)
                ans.push_back(res);
        else
        {
            for(int i = start ; i < nums.size(); i++)
            {
                if(i > start && nums[i] == nums[i-1]) continue;
                res.push_back(nums[i]);
                threeSumDFS(nums , target - nums[i] , i + 1 , res , ans);
                res.pop_back(); 
            }
                   
        }
    }
};
```

後來參考大神做法在自己裡寫一次

- 首先先對nums排序
- 先指定一個數num[i]，第10行是處理重複跳過，方法是從第二個開始，若跟第一個一樣就跳過
- 再來用 0 - num[i]為target，然後只要找到另外兩個指定數和為target就好
- 方法是用兩個指針從指定num[i]後的第一位數，以及num尾巴開始找
- 再來22以及23行一樣是跳過重複的判斷
- 若兩數相加還是比target小，代表要右邊指針在右移才能找到答案
- 左邊反之亦然




**需要注意細節**

- 一定要排序
- 為了避免重複，在找到一組解後，需要移動left and right避免重複選項

```cpp
 while(left < right)
{
    if(nums[left] + nums[right] == target)
    {
        res.push_back({nums[i] , nums[left] , nums[right]});
        left++;
        right--;

        while(left < right && nums[left -1] == nums[left]) left++;
        while(left < right && nums[right] == nums[right + 1]) right--;
    }
    else if(nums[left] + nums[right] < target) left++;
    else
        right--;

}
```
- 對於最外圍要判斷重複(第10行)