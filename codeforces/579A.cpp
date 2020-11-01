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
  long long x, t, b;
  cin >> x;

  b = 0;

  while (x > 1)
  {
    t = 1;
    while (t <= x)
    {
      t *= 2;
    }
    x -= (t / 2); // These 2^n could come from a single one
    b += 1;
  }

  cout << (b + x);
}