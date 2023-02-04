input()

ns = list(map(int, input().split()))
ns.sort()

sublists = []
curr = []
curr.append(ns[0])

for i in range(1, len(ns)):
  if ns[i-1] == ns[i]-1:
    curr.append(ns[i])
  else:
    sublists.append(curr)
    curr = [ns[i]]

sublists.append(curr)

def printi(s):
  print(f'{s} ', end='')

for sublist in sublists:
  l = len(sublist)
  if l > 2:
    printi(f'{sublist[0]}-{sublist[l-1]}')
  else:
    for x in sublist:
      printi(x)

print()
