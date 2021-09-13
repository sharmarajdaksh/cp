#include<bits/stdc++.h>
using namespace std;

const map<int, vector<int>> adj {};

int main() {
  int n, m, a, b;
  cin >> n >> m;
  long ans = 0;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a].push(b);
  }

  return 0;
}
