t = 50
n = 100
maxd = 32768
d = 50*20

print(t)
for _ in range(t):
  print(n)

  x = maxd
  # Jo's home
  print(maxd, maxd)
  x -= d

  # stores coords 50 meters apart
  for _ in range(n):
    print(x, maxd)
    x -= d

  # Bergkirchweih
  print(x, maxd)

