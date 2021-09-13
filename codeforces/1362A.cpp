#include<bits/stdc++.h> using namespace std;

long long r2(long long x) {
  long long c = 0;
  while (true) {
    if (x % 2) {
      return c;
    }

    c++;
    x /= 2;
  }
}

void solve() {
  long long a, b;
  cin >> a >> b;

  long long ar2 = r2(a);
  long long  br2 = r2(b);
  long long ax = a / ar2;
  long long  bx = b / br2;

  if (ax != bx) {
    cout <<  -1;
    return;
  }

  cout << ceil(abs(ar2 - b) + 1)
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
