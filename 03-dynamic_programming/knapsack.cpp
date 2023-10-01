#include "../header.hpp"
#include <sstream>

void knapsack(mi& cache, vi& vs, vi& ws, ll N, ll W) {
	for (ll i = 1; i <= N; i++)
	for (ll w = 0; w <= W; w++)
	cache[i][w] =
		(w < ws[i-1])
		? cache[i-1][w]
		: max(cache[i-1][w], vs[i-1] + cache[i-1][w-ws[i-1]]);
}

int main()
{
	ll W, N;
	while (cin >> W >> N)
	{
		vector<tuple<ll,ll,ll>> items;
		vi vs(N, -1);
		vi ws(N, -1);

		ll max_v = 0;
		ll max_w = 0;
		for (ll i = 0; i < N; i++)
		{
			ll v, w;
			cin >> v >> w;
			max_v = max(max_v, v);
			max_w = max(max_w, w);
			items.push_back(tuple<ll,ll,ll>{v, w, i});
		}

		sort(items.begin(), items.end(), [](tuple<ll,ll,ll> a, tuple<ll,ll,ll> b){ return get<1>(a) < get<1>(b); });

		for (ll i = 0; i < items.size(); i++)
		{
			vs[i] = get<0>(items[i]);
			ws[i] = get<1>(items[i]);
		}

		mi cache(N+1, vi(W+1, 0));
		knapsack(cache, vs, ws, N, W);

		// print idxs

		stringstream idxs;
		ll count = 0;
		for (ll i = N, j = W; i > 0 && j >= 0; i--)
		{
			if(cache[i-1][j] >= cache[i][j]) continue;
			idxs << get<2>(items[i-1]) << " ";
			count++;
			j -= ws[i-1];
		}
		cout << count << endl;
		cout << idxs.str() << endl;
		
	}

	return 0;
}