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
  long long x, y, a, b, m;
  cin >> x >> y;
  cin >> a >> b;

  if (x > y)
  {
    long long t = y;
    y = x;
    x = t;
  }
  // x is now smaller

  // Cases
  // ((y - x) * a) + (x * b)
  // (y * a) + (x * b)

  m = min(
      ((y - x) * a) + (x * b), (y * a) + (x * a));

  cout << m << '\n';
}