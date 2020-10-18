#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

  int testCases;
  cin >> testCases;

  while (testCases)
  {
    solve();

    testCases--;
  }

  return 0;
}

void solve()
{
  long n;
  cin >> n;

  long long x, y;
  set<long long> xs, ys;
  for (long i = 0; i < (4 * n - 1); i++)
  {
    cin >> x >> y;
    auto xt = xs.find(x);
    if (xt != xs.end())
    {
      xs.erase(xt);
    }
    else
    {
      xs.insert(x);
    }
    auto yt = ys.find(y);
    if (yt != ys.end())
    {
      ys.erase(yt);
    }
    else
    {
      ys.insert(y);
    }
  }

  cout << *xs.begin() << " " << *ys.begin() << '\n';
}
