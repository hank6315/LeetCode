# 1033. Moving Stones Until Consecutive
Three stones are on a number line at positions `a`, `b`, and `c`.

Each turn, let's say the stones are currently at positions `x, y, z` with `x < y < z`.  You pick up the stone at either position `x` or position `z`, and move that stone to an integer position `k`, with `x < k < z` and `k != y`.

The game ends when you cannot make any more moves, ie. the stones are in consecutive positions.

When the game ends, what is the minimum and maximum number of moves that you could have made?  Return the answer as an length 2 array: `answer = [minimum_moves, maximum_moves]`

**Example 1:**

**Input:** a = 1, b = 2, c = 5
**Output:** \[1, 2\]
**Explanation:** Move stone from 5 to 4 then to 3, or we can move it directly to 3.

**Example 2:**

**Input:** a = 4, b = 3, c = 2
**Output:** \[0, 0\] **Explanation:** We cannot make any moves.

**Note:**

1.  `1 <= a <= 100`
2.  `1 <= b <= 100`
3.  `1 <= c <= 100`
4.  `a != b, b != c, c != a`


## Solution

題目大意: 移動一個石頭，使得整個array是否是連續的值
，求最大移動及最小移動

case 1 : 如果三個石頭都是連續的，那麼就回傳{0,0}  
case 2 : 如果其中有兩顆是連續，而另外兩顆不是連續，那麼最小的移動為 1 



否則，最小移動距離為2   

example :

```
{7,4,1}
7 -> 4  and  1 -> 4 兩個都需要一步
```

最大移動距離為 num[2] - num[0] - 2   
```
example:
{1,2,6} 連續位置為6 -> 3
所以6 - 1 - 2(1,2) = 起始位置在加2

or

{1,5,6} 連續位置 1 -> 4 
一樣是6 - 1 - 2(5,6)