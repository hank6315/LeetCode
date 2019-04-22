# 650. 2 Keys Keyboard

###### tags: `Dynamic Programming`
Initially on a notepad only one character 'A' is present. You can perform two operations on this notepad for each step:

1.  `Copy All`: You can copy all the characters present on the notepad (partial copy is not allowed).
2.  `Paste`: You can paste the characters which are copied **last time**.

Given a number `n`. You have to get **exactly** `n` 'A' on the notepad by performing the minimum number of steps permitted. Output the minimum number of steps to get `n` 'A'.

**Example 1:**

**Input:** 3

**Output:** 3

**Explanation:**

Intitally, we have one character 'A'.
In step 1, we use **Copy All** operation.
In step 2, we use **Paste** operation to get 'AA'.
In step 3, we use **Paste** operation to get 'AAA'.

**Note:**

1.  The `n` will be in the range \[1, 1000\].


## Solution

- n = 1: return 0 
- n = 2: copy 1, paste 1 , return 2
- n = 3: copy 1 , paste 2 , return 3
- n = 4: copy 1 , paste 3 or copy 1 paste 1, copy 1(AA), paste 1 , return 4
- n = 5: copy 1 , paste 4 return 5
- n = 6: copy 1 , paste 2 (AAA) , copy 1 , paste 1 return 5

以6為例
- 可以先得到3個A後 在copy, paste 1次
- 也可以得到2個A後，在copy ,paste 2次

可以轉換成

`minsteps(n/i) + i `