#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll a, b, n, s;
  cin >> a >> b >> n >> s;

  if ((a * n) + (b * 1) < s) {
    cout << "NO\n";
    return;
  }
  
  ll as = min(s / n, a);
  if (b < s - (as * n)) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while(t) {
    solve();
    t--;
  }

  return 0;
}
