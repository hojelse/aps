import sys
l = set([])
for line in sys.stdin:
  l.add(int(line)%42)

print(len(l))