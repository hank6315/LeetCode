# 58. Length of Last Word
###### tags: `String`

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

    Input: "Hello World"
    Output: 5
    
    

## Solution

- 第五行是先找到第一個不是空白的字元
- 第7行開始是從這個字源開始找，直到他出現空白，即可以算出最後一個字串的長度