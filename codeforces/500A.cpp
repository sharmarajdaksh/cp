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
  long long n, t, c;
  cin >> n >> t;
  long long a[n];

  if (t == 1)
  {
    cout << "YES\n";
    return;
  }

  for (long long i = 1; i < n; i++)
  {
    cin >> a[i];
  }

  c = 1;
  for (long long i = 0; i < n - 1; i++)
  {
    c += a[c];

    if (c == t)
    {
      cout << "YES\n";
      return;
    }

    if (c > n)
    {
      cout << "NO\n";
      return;
    }
  }
}