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

  cout << ((n % 1000) == 0 ? 0 : (1000 - (n % 1000))) << '\n';
}