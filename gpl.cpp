#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	long ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') continue;

		long long pow = n - 1 - i;
		long long mul = 1;
		for (int j = 0; j < pow; j++) {
			mul *= 2;
		}
		ans += mul;
	}

	cout << ans << endl;
}


int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}