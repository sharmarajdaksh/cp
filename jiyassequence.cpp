#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	long long prod = 1;
	for (int i = 0; i < n; i++) {
		long t;
		cin >> t;
		prod *= t;
	}

	int lsd = prod % 10;
	if (lsd == 2 || lsd == 3 || lsd == 5) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}