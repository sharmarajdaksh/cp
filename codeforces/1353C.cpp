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
  unsigned long long n, numberOfCornerBoxes, totalMoves, currentSize;
  cin >> n;

  totalMoves = 0;

  for (currentSize = n; currentSize > 1; currentSize -= 2)
  {
    numberOfCornerBoxes = (4 * (currentSize - 1));
    totalMoves += (numberOfCornerBoxes * (currentSize / 2));
  }

  cout << totalMoves << '\n';
}