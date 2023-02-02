from collections import defaultdict

name_years = defaultdict(lambda: [])

n = int(input())

for _ in range(n):
  dest,y = input().split()
  year = int(y)
  name_years[dest].append(year)

for l in name_years:
  name_years[l].sort()

q = int(input())

for _ in range(q):
  dest,y = input().split()
  year = int(y)
  print(name_years[dest][year-1])

