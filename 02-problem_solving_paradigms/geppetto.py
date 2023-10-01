N,M = map(int, input().split())

m = 1<<N

s = set([])

for i in range(m):
  s.add(i)

for _ in range(M):
  a,b = sorted(map(int, input().split()))
  c = (1<<(a-1))+(1<<(b-1))
  rm_set = set({})
  for i in s:
    if (i&c == c):
      rm_set.add(i)
  s = s - rm_set

print(len(s))
