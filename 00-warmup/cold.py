n = input()
ts = map(int, input().split(" "))

count = 0
for t in ts:
  if t < 0:
    count += 1

print(count)