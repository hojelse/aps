def solve():
  N = int(input())
  if N == 0:
    return False

  l = []

  s1,s2 = 0,0

  for i in range(N):
    ins,amt1 = input().split()
    amt = int(amt1)

    if ins == "DROP":
      print(f"DROP 1 {amt}")
      s1 += amt
    else:
      diff = s2-amt
      if diff < 0:
        if s2 != 0:
          print(f"TAKE 2 {s2}")
        print(f"MOVE 1->2 {s1}")
        print(f"TAKE 2 {amt-s2}")
        s2 = s1+s2-amt
        s1 = 0
      else:
        print(f"TAKE 2 {amt}")
        s2 -= amt

  print()
  return True

while solve():
  pass

