# 204. Count Primes
###### tags: `Math`

Count the number of prime numbers less than a non-negative number, n.

Example:

	Input: 10
	Output: 4
	Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

## Solution

埃拉托斯特尼筛法Sieve of Eratosthenes
![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Sieve_of_Eratosthenes_animation.gif/350px-Sieve_of_Eratosthenes_animation.gif)

- 我們從2開始search到根號N，先找到第一個質數2，然後將其所有的2倍數全部標記出來，然後到下一個質數3，標記其所有3倍數，一次類推，直到根號N，此時數組中未被標記的數字就是質數