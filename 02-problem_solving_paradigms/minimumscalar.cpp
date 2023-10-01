#include "../header.hpp"
ll solve() {
  ll N;
  cin >> N;

  vi xs;
  vi ys;
  ll x;
  REP(i, 1, N) {
    cin >> x;
    xs.push_back(x);
  }
  REP(i, 1, N) {
    cin >> x;
    ys.push_back(x);
  }

  sort(xs.begin(), xs.end());
  sort(ys.begin(), ys.end());

  ll scalar_prod = 0;
  REP(i, 0, N-1)
    scalar_prod += xs[i] * ys[N-1-i];

  return scalar_prod;
}

int main(void) {
  ll T;
  cin >> T;
  REP(i, 1, T) {
    cout << "Case #" << i << ": " << solve() << endl;
  }
  
  return 0;
}
