# 39. Combination Sum
###### tags: `Array` `BackTracking`

Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

    Input: candidates = [2,3,6,7], target = 7,
    A solution set is:
    [
      [7],
      [2,2,3]
    ]
Example 2:

    Input: candidates = [2,3,5], target = 8,
    A solution set is:
    [
      [2,2,2,2],
      [2,3,3],
      [3,5]
    ]


## Solution

這種必須回傳所有項目的基本上都是要利用遞迴，基本上都是需要寫一個遞迴function

- 選定一個candidates[i]，然後需要找尋target - candidates[i]的樹，若超過或等於traget時就停止
- 不回頭掃，當選定為candidates[i]就只會對[i : i-1]進行遞迴