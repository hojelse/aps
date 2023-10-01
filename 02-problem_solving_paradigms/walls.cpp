#include "../header.hpp"
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define char_inf CHAR_MAX

lf dist(ll x1, ll y1, ll x2, ll y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int main() {
  ll l,w,n,r,x,y;
  cin >> l >> w >> n >> r;

  // 0b1111 if touches all corners
  set<char> kinds;
  for (ll i = 0; i < n; i++){
    cin >> x >> y;
    bool left   = r >= dist(x,y, -l/2,0);
    bool right  = r >= dist(x,y, l/2,0);
    bool top    = r >= dist(x,y, 0,-w/2);
    bool bottom = r >= dist(x,y, 0,w/2);
    char kind = (left<<3) + (right<<2) + (top<<1) + bottom;
    kinds.insert(kind);
  }

  vector<char> kinds2;
  for (char c : kinds) {
    kinds2.push_back(c);
  }

  ll m = 1<<kinds2.size();
  
  ll best = inf;
  for (char i = 1; i < m; i++) {
    char res = 0;
    ll count = 0;
    for (char j = 0; j < kinds2.size(); j++) {
      if (CHECK_BIT(i, j)) {
        res = res | kinds2[j];
        count++;
      }
    }
    
    if (res == 0b1111 && count < best) {
      best = count;
    }
  }

  if (best == inf) cout << "impossible" << endl;
  else             cout << best << endl;

  return 0;
}
