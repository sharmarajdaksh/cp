#include<bits/stdc++.h>
using namespace std;

void solve() {
  long n;
  cin >> n;
  long c8 = (n + 3) / 4;

  for (int i = n - c8; i > 0; i--) {
    cout << 9;
  }
  for (int i = 0; i < c8; i++) {
    cout << 8;
  }
  cout << endl;
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
