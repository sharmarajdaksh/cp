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
  long long x, y, n;
  cin >> x >> y >> n;
  long long o = (((n / x) * x) + y);
  if (o > n)
  {
    o = ((n / x - 1) * x) + y;
  }
  cout << o << '\n';
}