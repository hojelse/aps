List slicing
```python
L[i]         # ith element of L
L[i:j]       # range [i; j-1]
L[:j]        # range [0; j-1]
L[i:]        # range [i; N-1]
L[-3:]       # range [N-4; N-1]
L[i:j:s]     # range [i; j-1] with s sized steps
L[::2]       # evens
L[:]         # copy
L[::-1]      # reverse copy
```

List/stack operations
`list = []`
```python
len(L)       #                     O(1)
sorted(L)    #                     O(n log n)
L.sort()     # in-place            O(n log n)
L.count(c)   # num of occurences   O(n)
c in L       # contains            O(n)
L.append(c)  # push                amortised O(1)
L.pop(c)     # pop                 amortised O(1)

for idx, val in enumerate(L):
```

List comprehensions
```python
n = 5
[x ** 2 for x in range(n+1)]  # [0, 1, 4, 9, 16, 25]
[0 for _ in range(n)]         # [0, 0, 0, 0, 0]
```

```python
_str = "hello"
{c: 0 for c in _str}  # {'h': 0, 'e': 0, 'l': 0, 'o': 0}

for idx, val in dict.items():
```

# I/O
```python
input() # slow read line

import sys
n, m = map(int, sys.stdin.readline().split()) # fast read line

instance = list(map(int, os.read(0, upper_bound_file_size).split())) # fast read all lines


print(f"n:{n} m:{m}")
```