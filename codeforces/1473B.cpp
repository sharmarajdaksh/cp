#include<bits/stdc++.h>
using namespace std;

void solve() {

  string s, t, tmp;
  cin >> s >> t;

  int llcm = s.size() * t.size() / __gcd(s.size(), t.size());

  int ns = llcm / s.size();
  int nt = llcm / t.size();

  string nss = "", ntt = "";
  for (int i = 0; i < ns; i++) {
    nss += s;
  }
  for (int i = 0; i < nt; i++) {
    ntt += t;
  }

  if (nss == ntt) {
    cout << nss << endl;
    return;
  }
  
  cout << -1 << endl;
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
