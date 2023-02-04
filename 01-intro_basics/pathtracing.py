import sys
from collections import defaultdict

coord_char = defaultdict(lambda: ' ')

center = 1000

minx = miny = maxx = maxy = center

x,y = center,center

for ins in sys.stdin:
  ins = ins.rstrip()

  if ins == "up":
    y = y-1
  elif ins == "right":
    x = x+1
  elif ins == "down":
    y = y+1
  elif ins == "left":
    x = x-1
  else:
    assert False

  coord_char[(x,y)] = '*'

  minx = min(minx, x)
  maxx = max(maxx, x)
  miny = min(miny, y)
  maxy = max(maxy, y)

coord_char[(center, center)] = 'S'
coord_char[(x,y)] = 'E'

print('#'*(3+maxx-minx))

for j in range(miny, maxy+1):
  print('#', end='')
  for i in range(minx, maxx+1):
    print(coord_char[(i,j)], end='')
  print('#')

print('#'*(3+maxx-minx))
