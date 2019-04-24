# 433. Minimum Genetic Mutation

###### tags: `BFS`

A gene string can be represented by an 8-character long string, with choices from `"A"`, `"C"`, `"G"`, `"T"`.

Suppose we need to investigate about a mutation (mutation from "start" to "end"), where ONE mutation is defined as ONE single character changed in the gene string.

For example, `"AACCGGTT"` -> `"AACCGGTA"` is 1 mutation.

Also, there is a given gene "bank", which records all the valid gene mutations. A gene must be in the bank to make it a valid gene string.

Now, given 3 things - start, end, bank, your task is to determine what is the minimum number of mutations needed to mutate from "start" to "end". If there is no such a mutation, return -1.

**Note:**

1.  Starting point is assumed to be valid, so it might not be included in the bank.
2.  If multiple mutations are needed, all mutations during in the sequence must be valid.
3.  You may assume start and end string is not the same.

**Example 1:**

start: "AACCGGTT"
end:   "AACCGGTA"
bank: \["AACCGGTA"\]

return: 1

**Example 2:**

start: "AACCGGTT"
end:   "AAACGGTA"
bank: \["AACCGGTA", "AACCGCTA", "AAACGGTA"\]

return: 2

**Example 3:**

start: "AAAAACCC"
end:   "AACCCCCC"
bank: \["AAAACCCC", "AAACCCCC", "AACCCCCC"\]

return: 3

## Solution

**題目大意** : 給出一個起始基因，一個結束基因，問能不能通過轉換(每次只改變當前基因的一位數)，並且變換後會再bank裡是有效的，最後能變成end，若不能的話，return -1;   

基本上跟[127. Word Ladder]()一樣


- 先建立gens字母{'A','C', 'G', 'T'}
- 用一個set把bank加入，首先先判斷end是否在bank裡面，若沒有的話就可以直接return -1
- 之後把start 加入到queue裡面
- 拿取queue第一筆的string，針對每個String的字母去換成gens裡面的字母，若字母能在bank裡面找到的話，就繼續塞入queue，然後把這個字母從bank裡面刪除(因為找過了)
- 紀錄每次遍歷的長度