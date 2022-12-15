#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::map<std::string, std::vector<int> > trips;

typedef long long LL;
typedef long double F;

int main()
{
  int n;
  int q;
  std::string cntr;
  int year;

  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> cntr >> year;
    trips[cntr].push_back(year);
  }

  for (auto &kv : trips)
    std::sort(kv.second.begin(), kv.second.end());

  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    std::cin >> cntr >> year;
    std::cout << trips[cntr][year - 1] << '\n';
  }

  return 0;
}