N,T = map(int, input().split())

l = []

for i in range(N):
  c,t = map(int, input().split())
  l.append((c,t))

l.sort(reverse=True)

s = [-1]*T

for (c,t) in l:
  for i in range(t,-1,-1):
    if s[i] == -1:
      s[i] = c
      break

total = 0

for a in s:
  if a != -1:
    total += a

print(total)

