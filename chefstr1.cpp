#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

  int T;
  cin >> T;

  while (T)
  {
    solve();
    T--;
  }
}

void solve()
{
  long N;
  cin >> N;

  long c, p;
  long long s = 0;
  cin >> p;
  for (long i = 0; i < N - 1; i++)
  {
    cin >> c;
    s += abs(c - p) - 1;
    p = c;
  }

  cout << s << '\n';
}
