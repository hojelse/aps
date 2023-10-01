import sys


def f(prev, k, n, cache):
	if (cache[prev][n] != -1):
		return cache[prev][n]

	if (n == 1):
		cache[prev][n] = 1
		return 1

	s = 0

	if (prev+1 <= k): 		s += f(prev+1, k, n-1, cache)
	if (0 <= prev <= k): 	s += f(prev,   k, n-1, cache)
	if (prev-1 >= 0): 		s += f(prev-1, k, n-1, cache)
	
	cache[prev][n] = s
	return s


k_max = 9
n_max = 100

for line in sys.stdin:
	k, n = map(int, line.split())

	cache = [[-1]*(n_max+1) for _ in range(k_max+1)]

	count = 0
	for i in range(k+1):
		count += f(i, k, n, cache)

	ratio = (count / (k+1) ** n) * 100

	print(f'{ratio:.8f}')
