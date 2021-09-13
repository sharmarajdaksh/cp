#include<bits/stdc++.h>
using namespace std;

void solve() {
  long n, m, x, y, o = 0;
  bool allSingle = false, lastWasWhite = false;
  const char BLACK = '*';
  char c;
  cin >> n >> m >> x >> y;

  if (2 * x < y) {
    allSingle = true;
  }

  for (long i = 0; i < n; i++) {
    for (long j = 0; j < m; j++) {

      cin >> c;

      if (c == BLACK) {
        lastWasWhite = false;
        continue;
      }

      if (lastWasWhite) {
        if (allSingle)
          o += x;
        else {
          o = o - x + y;
        }
        lastWasWhite = false;
      } else {
        o += x;
        lastWasWhite = true;
      }
    }
    lastWasWhite = false;
  }

  cout << o << endl;
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
