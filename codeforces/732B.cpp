#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n] = {0};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int c = 0;
  for (int i = 1; i < n; i++) {
    c += max(0, k - a[i] - a[i - 1]);
    a[i] = a[i] + max(0, k - a[i] - a[i - 1]);
  }

  cout << c << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
