#include "../header.hpp"
#include <list>

bool DFS_connectivity(mi& adj, ll N) {
  list<ll> queue;

  ll s = N;
  ll t = N+1;

  vi seen(N+2);

  seen[s] = 1;
  queue.push_back(s);

  while (true) {
    if (queue.size() == 0) break;

    ll c = queue.front();
    queue.pop_front();

    seen[c] = true;

    if (c == t) return true;

    for (ll i : adj[c]) {
      if (!seen[i])
        queue.push_back(i);
    }
  }

  return false;
}


int main(){
  ll T, N;
  cin >> T;

  for (ll i = 0; i < T; i++) {
    cin >> N;
    vii points(N+2);

    ll x, y;
    cin >> x >> y;
    points[N] = ii{x,y};

    for (ll j = 0; j < N; j++){
      cin >> x >> y;
      points[j] = ii{x,y};
    }
    
    cin >> x >> y;
    points[N+1] = ii{x,y};
    
    // check dist, create graph
    mi adj(N+2);

    for (ll i = 0; i < N+2; i++){
      for (ll j = i; j < N+2; j++){
        if (i == j) continue;
        auto [x1,y1] = points[i];
        auto [x2,y2] = points[j];
        ll dist = abs(x1-x2) + abs(y1-y2);
        if (dist <= 50*20) {
          adj[i].push_back(j);
          adj[j].push_back(i);
        }
      }
    }

    bool connected = DFS_connectivity(adj, N);

    cout << (connected ? "happy" : "sad") << endl;

  }
  return 0;
}
