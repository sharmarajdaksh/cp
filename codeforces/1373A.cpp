#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  if (a >= c) {
    cout << -1 << ' ' << b << endl;
    return;
  }

  if (a * b <= c) {
    cout <<  1 << ' ' << -1 << endl;
    return;
  }

  cout << 1 << ' ' << b << endl;
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
