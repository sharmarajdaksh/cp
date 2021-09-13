#include<bits/stdc++.h>
using namespace std;

char firstNonQ(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '?') return  s[i];
  }
  return '?';
}


void solve(int t) {
  int cost = 0;
  int x, y;
  string s;

  cin >> x >> y;
  cin >> s;

  int last = firstNonQ(s);
  if (last == '?') {
    cout << "Case #" << t << ": " << 0 << endl;
    return;
  }

  for (int i = 0; i < s.size();i++) {
    if (s[i] == 'C') {
      if (last == 'J') {
        cost += y;
      }

      last = 'C';
    } else if (s[i] == 'J') {
      if (last  == 'C') {
        cost += x;
      }

      last = 'J';
    } 
  }

  cout << "Case #" << t << ": " << cost << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve(i + 1);
  }
}
