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
  long long n, x, c, d, m;
  cin >> n >> x;

  c = 0;

  for (int i = 1; i <= n; i++)
  {
    d = x / i;
    m = x % i;
    if (m == 0 && d <= n)
    {
      c += 1;
    }
  }

  cout << c << '\n';
}