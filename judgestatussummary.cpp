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

  long n;
  cin >> n;

  long ac = 0, wa = 0, tle = 0, re = 0;
  string s;

  for (long i = 0; i < n; i++)
  {
    cin >> s;
    if (s == "AC")
      ac++;
    if (s == "WA")
      wa++;
    if (s == "TLE")
      tle++;
    if (s == "RE")
      re++;
  }

  cout << "AC x " << ac << '\n';
  cout << "WA x " << wa << '\n';
  cout << "TLE x " << tle << '\n';
  cout << "RE x " << re << '\n';
}