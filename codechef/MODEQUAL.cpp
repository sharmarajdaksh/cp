#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int tmp;
	unordered_map<int, int> freq;
	int mn = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		freq[tmp]++;
		mn = min(tmp, mn);
	}

	for (auto& p: freq) {
		if (p.first != mn && (p.first % (p.first - mn)) != mn) {
			cout << n << endl;
			return;
		}
	}

	cout << (n - freq[mn]) << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}