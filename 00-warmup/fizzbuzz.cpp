#include <iostream>
typedef long long ll;
using namespace std;
int main(void) {
  ll x, y, n;
  cin >> x >> y >> n;
  ll num;
  for (int i = 1; i <= n; i++) {
    bool f = i % x == 0;
    bool b = i % y == 0;
    if (f && b) cout << "FizzBuzz\n";
    else if (f) cout << "Fizz\n";
    else if (b) cout << "Buzz\n";
    else cout << to_string(i)+"\n";
  }
  return 0;
}