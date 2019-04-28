# 207. Course Schedule I && II
###### tags: `DFS` `Graph`

There are a total of n courses you have to take, labeled from 0 to n-1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?
```
Example 1:

Input: 2, [[1,0]] 
Output: true
Explanation: There are a total of 2 courses to take. 
             To take course 1 you should have finished course 0. So it is possible.
Example 2:

Input: 2, [[1,0],[0,1]]
Output: false

Explanation: There are a total of 2 courses to take. 
             To take course 1 you should have finished course 0, and to take course 0 you should
             also have finished course 1. So it is impossible.
```
Note:

The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
You may assume that there are no duplicate edges in the input prerequisites.

## Solution

DFS -  Topological Sort   

紀錄走訪   

我們建立一個v的數組來記錄訪問狀態，這邊有三個狀態   
0 - 還未訪問  
1 - 訪問中  
2 - 已經訪問過了  

主要邏輯是:   
一開始先建立好所有課程，然後從第一門課調用DFS訪問   

判斷方法:  
一個節點以及從該節點所連接的後續節點是否有  **circle**存在   

- 若該節點的狀態為0，則將節點變為訪問中(1)，繼續DFS節點的鄰居節點，直到所有鄰居節點都都已經被訪問中，則將節點改為訪問過(2)

- 若該節點為訪問中(1)，表示該節點以及在DFS路上存在cricle，則反回true
- 若該節點為訪問過了(2)，表示當前節點已從從節點出後的後續節點都被訪過過了，所以不存在cricle，則反回false
