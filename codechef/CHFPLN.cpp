#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int tmp;
	map<int, int> freq;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		freq[tmp]++;
	}

	int res = 0;
	for (auto& p: freq) {
		res += min(p.first - 1, p.second);
	}

	cout << res << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}