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
  int n;
  string s;
  cin >> n;
  cin >> s;

  int bc = 0, m = 0;
  for (auto c : s)
  {
    if (c == '(')
      bc++;
    if (c == ')')
    {
      if (bc == 0)
      {
        m++;
      }
      else
      {
        bc--;
      }
    }
  }

  cout << m << '\n';
}