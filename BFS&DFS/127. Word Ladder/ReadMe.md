# 127. Word Ladder
###### tags: `BFS`

Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:

Only one letter can be changed at a time.
Each transformed word must exist in the word list. Note that beginWord is not a transformed word.
Note:

Return 0 if there is no such transformation sequence.
All words have the same length.
All words contain only lowercase alphabetic characters.
You may assume no duplicates in the word list.
You may assume beginWord and endWord are non-empty and are not the same.
```
Example 1:

Input:
beginWord = "hit",
endWord = "cog",
wordList = ["hot","dot","dog","lot","log","cog"]

Output: 5

Explanation: As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.
Example 2:

Input:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]

Output: 0

Explanation: The endWord "cog" is not in wordList, therefore no possible transformation.
```

## Solution

**題目大意** : 從begin開始，每次只能替換一個字母，替換後也必須符合在wordlist裡面的string，看最終能不能換成end

- 先把vector 轉成set (有count可以用)
- 先尋找wordlist是否有endword，若沒有直接返回0
- 若有的話首先先建立一個queue<pair<string,int>?
- 把第一筆資料塞進去
- 之後把第一筆資料取出來開始尋找
- 首先對第一個word的第一個字母開始收尋26個
- 若可以在wordlist裡面找到的話就把它塞入queue後把這個word從wordlist刪除避免第二次再被找到
