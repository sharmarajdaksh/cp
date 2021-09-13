#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a[n] = {0};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  for (int i = n - 1; i >= 0; i--) {
    if (a[i] <= i + 1) {
      cout << i + 2 << endl;
      return;
    }
  }

  cout << 1 << endl;
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
