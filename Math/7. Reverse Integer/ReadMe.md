## 7. Reverse Integer

### Solution


最後需要注意一下是否overflow.

```
res = res * 10 + x % 10;
x /=10;
```