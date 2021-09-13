#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int t;
  long total = 0;

  cin >> n;
  while (n) {
    cin >> t;
    if (t > 10) {
      total += (t - 10);
    }
    n--;
  }

  cout << total << endl;

  return 0;
}
