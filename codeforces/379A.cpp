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
  long long a, b, o;
  cin >> a >> b;

  o = a;

  while (o >= b)
  {
    a += o / b;
    o = ((o / b) + (o % b));
  }

  cout << a << '\n';
}