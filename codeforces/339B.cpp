#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
  solve();

  return 0;
}

void solve()
{
  long long m, n, t;
  cin >> n >> m;

  long long c = 1;
  long long s = 0;
  for (long long i = 0; i < m; i++)
  {
    cin >> t;
    if (t >= c)
    {
      s += (t - c);
    }
    else
    {
      s += (n - c + t);
    }
    c = t;
  }

  cout << s << '\n';
}
