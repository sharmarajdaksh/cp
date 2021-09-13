#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, disp = 0, tdisp;
    cin >> n;
    int q[n] = {0};
    for (int i = 0; i < n; i++) {
      cin >> q[i];
    }
    for (int i = 0; i < n; i++) {
      tdisp = q[i] - i - 1;
      if (tdisp > 2) {
        cout << "Too chaotic\n";
        return;
      }
      if (tdisp > 0) {
        disp += tdisp;
      }
    }

    cout << disp << endl;
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

