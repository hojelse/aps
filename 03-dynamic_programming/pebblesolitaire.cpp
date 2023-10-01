#include "../header.hpp"

#define RIGHT 0b110
#define LEFT 0b011
#define MASK 0b111

ll f(ll board, ll count, ll n, map<ll, ll>& cache)
{
	if (cache.count(board))
		return cache[board];

	ll m = count;

	for (ll i = 0; i < n-2; i++)
		if(((board >> i) & MASK) == RIGHT)
			// 0b110 - 5 = 0b001
			m = min(m, f(board - (5<<i), count-1, n, cache));
		else if (((board >> i) & MASK) == LEFT)
			// 0b011 + 1 = 0b100
			m = min(m, f(board + (1<<i), count-1, n, cache));

	cache[board] = m;
	return m;
}

int main() {
	ll N;
	cin >> N;

	string s;

	for (ll i = 0; i < N; i++)
	{
		cin >> s;

		ll n = s.size();

		ll board = 0;
		ll count = 0;

		for (ll i = 0; i < n; i++) {
			if (s[i] == '-') continue;
			board |= (1 << i);
			count++;
		}

		map<ll,ll> cache = map<ll,ll>();
		cout << f(board, count, n, cache) << endl;
	}

	return 0;
}