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
  int H, W, K;
  cin >> H >> W >> K;

  vector<vector<char>> v;
  vector<char> vt;
  char t;

  for (int i = 0; i < H; i++)
  {
    vt.clear();
    for (int j = 0; j < W; j++)
    {
      cin >> t;
      vt.push_back(t);
    }
    v.push_back(vt);
  }
}