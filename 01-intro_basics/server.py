n,T = map(int, input().split())
ts = map(int, input().split())

s = 0
c = 0
for t in ts:
  if not t+s <= T:
    break
  s += t
  c += 1
print(c)
