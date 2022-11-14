def f(i):
  divX = i % x == 0
  divY = i % y == 0

  if divX and divY:
    return "FizzBuzz"
  if divX:
    return "Fizz"
  if divY:
    return "Buzz"
  return i

(x, y, n) = map(int, input().split(" "))
for i in range(1, n+1):
  print(f(i))
