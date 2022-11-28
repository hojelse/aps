#include <iostream>
#include <vector>
#include <set>
#include <sstream>
typedef long long ll;
using namespace std;

void run() {
  string line;
  string rec;
  getline(cin, rec);
  stringstream s_stream(rec);

  set<string> sounds;
  vector<string> recs;

  while (s_stream.good()) {
    string substr;
    getline(s_stream, substr, ' ');
    sounds.insert(substr);
    recs.push_back(substr);
  }
  
  for (;getline(cin, line);) {
    if (line.find("what does the fox say?") != -1)
      break;

    int n = line.find(" goes ");
    string sound = line.substr(n+6, line.length()-n);
    sounds.erase(sound);
  }

  bool first = true;
  for (int i = 0; i < recs.size(); i++) {
    if (sounds.find(recs[i]) != sounds.end()) {
      if (first) {
        cout << recs[i];
        first = false;
      } else {
        cout << ' ' << recs[i];
      }
    }
  }

  cout << '\n';
}

int main(void) {
  int x;
  cin >> x;

  string line;
  getline(cin, line); // consume line

  for (int i = 0; i < x; i++)
    run();  

  return 0;
}
