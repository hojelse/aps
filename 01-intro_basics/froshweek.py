n = int(input())
l = []
for i in range(n):
  l.append(int(input()))

count = 0

def merge_sort(l) -> list:
  global count

  if len(l) == 1:
    return l

  mid = len(l)//2
  lo, hi = merge_sort(l[:mid]), merge_sort(l[mid:])

  new_l = []

  lo_idx, hi_idx = 0, 0

  while True:

    lo_empty, hi_empty = lo_idx >= len(lo), hi_idx >= len(hi)

    if lo_empty and hi_empty:
      break

    low  = lo[lo_idx] if not lo_empty else 1_000_000_001
    high = hi[hi_idx] if not hi_empty else 1_000_000_001

    if low < high:
      new_l.append(low)
      lo_idx += 1
    else:
      new_l.append(high)
      hi_idx += 1
      count += (len(lo)-lo_idx)

  return new_l

merge_sort(l)
print(count)

# Count Inversions O(n^2)
# count = 0
# for i in range(n):
#   for j in range(i+1, n):
#     if (l[i] > l[j]):
#       count += 1
# print(count)
