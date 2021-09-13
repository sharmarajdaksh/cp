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
  long n, t;
  cin >> n >> t;

  if (t == 10)
  {
    if (n == 1)
    {
      cout << -1 << '\n';
      return;
    }
    else
    {
      for (long i = 0; i < n - 1; i++)
      {
        cout << 1;
      }
      cout << 0 << '\n';
      return;
    }
  }

  for (long i = 0; i < n; i++)
  {
    cout << t;
  }
  cout << '\n';
}