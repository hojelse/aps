#include "../header.hpp"
#include <iomanip>
#include <sstream>

ll f(ll prev, ll k, ll n, mi& cache)
{
	if (cache[prev][n] != -1) return cache[prev][n];
	if (n == 1) {
		cache[prev][n] = 1;
		return 1;
	}

	ll sum = 0;

	if (prev+1 <= k) 	sum += f(prev+1, k, n-1, cache);
	if (0 <= prev <= k) sum += f(prev,   k, n-1, cache);
	if (prev-1 >= 0) 	sum += f(prev-1, k, n-1, cache);
	
	cache[prev][n] = sum;
	return sum;
}

int main() {
	ll k_max = 9;
	ll n_max = 100;

	ll k, n;
	while (cin >> k >> n)
	{
		mi cache = mi(k_max+1, vi(n_max+1, -1));

		ll count = 0;
		for (ll i = 0; i <= k; i++)
			count += f(i, k, n, cache);

		lf ratio = (count / pow((k+1), n)) * 100;

		stringstream stream;
		stream << fixed << setprecision(9) << ratio;

		cout << stream.str() << endl;

		// cout << k << " " << n << " " << count << " / " << pow((k+1), n) << " = " << ratio << endl;

		// cout << "cache" << endl;
		// for (ll i = 0; i <= k; i++)
		// {
		// 	for (ll j = 0; j <= n; j++)
		// 		cout << cache[i][j] << "\t";
		// 	cout << endl;
		// }
	}
	
	return 0;
}
