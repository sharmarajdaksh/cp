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
  int k, o;
  cin >> k;
  o = 64 - k;

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (j == 7 && i == 7)
      {
        cout << "O";
      }
      else if (o)
      {
        cout << "X";
        o--;
      }
      else
      {
        cout << ".";
      }
    }
    cout << "\n";
  }
}