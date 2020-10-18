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
  int a, b, c;
  cin >> a >> b >> c;

  cout << max(a * b + c,
              max(a + b * c,
                  max((a + b) * c,
                      max(a * (b + c),
                          max(a * b * c, a + b + c)))));
}