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

  long strength, numDragons;
  cin >> strength >> numDragons;

  vector<pair<long, long>> dragons;

  while (numDragons)
  {
    long dragonStrength, dragonBonus;
    cin >> dragonStrength >> dragonBonus;

    dragons.push_back(pair<long, long>(dragonStrength, dragonBonus));

    numDragons--;
  }

  sort(dragons.begin(), dragons.end(), [](pair<long, long> a, pair<long, long> b) {
    return a.first < b.first;
  });

  bool canWin = true;
  for (pair<long, long> dragon : dragons)
  {
    if (dragon.first >= strength)
    {
      canWin = false;
      break;
    }

    strength += dragon.second;
  }

  cout << (canWin ? "YES" : "NO");
}