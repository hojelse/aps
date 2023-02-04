n = int(input())
l = map(int, input().split())

stack = []

for x in l:
  peek = stack[len(stack)-1] if len(stack) > 0 else -1
  if peek == x:
    stack.pop()
  else:
    stack.append(x)

print(2*n if len(stack) == 0 else "impossible")
