#include <iostream>
#include <set>
typedef long long ll;
using namespace std;

int main() {
  int x;
  set<int> nums;
  for (int i = 0; i < 10; i++)
  {
    cin >> x;
    nums.insert(x % 42);
  }
  cout << nums.size() << "\n";
}