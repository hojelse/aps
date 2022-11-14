from collections import defaultdict
n = int(input())

d = defaultdict(list)

for i in range(n):
  s, y = input().split()
  d[s].append(int(y))

for k,v in d.items():
  v.sort()

q = int(input())

for i in range(q):
  s,k = input().split()
  print(d[s][int(k)-1])
