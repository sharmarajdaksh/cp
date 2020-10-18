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
  long long n, k, t, rt;
  cin >> n >> k;

  map<long long, long long> rm;
  for (long long i = 0; i < n; i++)
  {
    cin >> t;
    if (t % k == 0)
    {
      continue;
    }

    rt = k - (t % k);
    if (rm.find(rt) != rm.end())
    {
      rm[rt]++;
    }
    else
    {
      rm[rt] = 1;
    }
  }

  long long x = 0;

  if (rm.size() == 0)
  {
    cout << 0 << '\n';
    return;
  }

  while (rm.size())
  {
    x = (*rm.begin()).first;
    if (rm[x] > 1)
    {
      rm[x + k] = rm[x] - 1;
    }
    rm.erase(x);
  }

  cout << ++x << '\n';
}