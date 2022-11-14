n = int(input())
for i in range(n):
  rec = input().split(" ")
  s = set([])

  line = input()
  while (line != "what does the fox say?"):
    sound = line.split(" ")[2]
    s.add(sound)
    line = input()
  
  print(" ".join(filter(lambda sound: not sound in s, rec)))
