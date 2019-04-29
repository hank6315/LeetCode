# 56. Merge Intervals
###### tags: `Array`


Given a collection of intervals, merge all overlapping intervals.

Example 1:
```
Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
```
Example 2:
```
Input: [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considerred overlapping.
```




## Solution

- 先排序

```cpp
static int camp(Interval& a, Interval& b){return a.start < b.start;}

sort(intervals.begin() , intervals.end(), camp);
```

- 利用下一個加入的Interval的start去跟前一個的end比較，若Interval的start比前一個end小的話，代表這部分是重疊的，於是就去更新Interval的end range

```cpp
res.push_back(intervals[0]);
        
for(auto& ins : intervals)
{
    if(ins.start <= res.back().end)
        res.back().end = max(res.back().end, ins.end);
    else
        res.push_back(ins);
}
```