#include<bits/stdc++.h>
using namespace std;

int main() {

  int n, a, b;
  cin >> n >> a >> b;

  // a <= i - 1 and n - i <= b
  // a + 1 <= i and n - b <= i
  // n - max(a + 1, n - b) + 1
  cout << (n - max(a + 1, n - b) + 1) << endl;

  return 0;
}
