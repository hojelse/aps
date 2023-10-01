a,b = 1,0
for _ in range(int(input())):
	a,b = b, b+a
print(a, b)