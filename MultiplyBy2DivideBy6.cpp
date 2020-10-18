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
  long long n;
  cin >> n;

  if (n == 1)
  {
    cout << 0 << '\n';
    return;
  }

  long long cnt3 = 0, ncp = n, cnt2 = 0;
  while (ncp % 3 == 0)
  {
    cnt3++;
    ncp /= 3;
  }

  while (ncp % 2 == 0)
  {
    cnt2++;
    ncp /= 2;
  }

  if (ncp != 1)
  {
    cout << -1 << '\n';
    return;
  }

  if (cnt3 < cnt2)
  {
    cout << -1 << '\n';
    return;
  }

  cout << ((2 * cnt3) - cnt2) << '\n';
}