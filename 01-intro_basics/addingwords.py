import sys
m = {}
m1 = {}

def apply(op, a, b):
  if op == "-": return a - b
  return a + b

for s in sys.stdin:
  ts = s.rstrip().split()
  ins = ts[0]
  if ins == "calc":
    res = 0
    for i in range(1,len(ts)-1,2):
      if ts[i] in m:
        res = apply(ts[i-1], res, m[ts[i]])
      else:
        res = "unknown"
        break
    print(" ".join(ts[1:]), m1[res] if res in m1 else "unknown")
  if ins == "def":
    v = int(ts[2])
    k = ts[1]

    old_v = m.pop(k, None)
    m1.pop(old_v, None)

    m[k] = v
    m1[v] = k
  if ins == "clear":
    m = {}
    m1 = {}
