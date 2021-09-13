#include<bits/stdc++.h>
using namespace std;


int evalCost(int x, int y, string s) {
  string sub;
  int cost = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    sub = s.substr(i, 2);
    if (sub == "CJ") {
      cost += x; 
    } else if (sub == "JC") {
      cost += y;
    }
  }

  return cost;
}

int getCost(int x, int y, string s) {
  size_t idx = s.find('?');
  if (idx >= s.size()) {
    return evalCost(x, y, s);
  }

  s[idx] = 'J';
  int cost1 = getCost(x, y, s);
  s[idx] = 'C';
  int cost2 = getCost(x, y, s);

  return min(cost1, cost2);
}

void solve(int t) {
  int cost = 0;
  int x, y;
  string s;

  cin >> x >> y;
  cin >> s;

  cost = getCost(x, y, s);

  cout << "Case #" << t << ": " << cost << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve(i + 1);
  }
}
