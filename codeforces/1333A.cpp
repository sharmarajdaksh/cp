#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  for (int i= 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 && j == 0) {
        cout << 'W';
        continue;
      }
      cout << 'B';
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;

  while (t) {
    solve();
    t--;
  }

  return 0;
}
