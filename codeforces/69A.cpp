#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n;

  long x = 0, y = 0, z = 0;
  for (int i = 0; i < n; i++) {
    cin >> t;
    x += t;
    cin >> t;
    y += t;
    cin >> t;
    z += t;
  }

  cout << ((x == 0 && y == 0 && z == 0) ? "YES" : "NO") << endl;
}
