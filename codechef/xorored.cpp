#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int mx = *max_element(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		arr[i] ^= mx;
	}


	int res = arr[0];
	for (int i = 1; i < n; i++) {
		res |= arr[i];
	}

	cout << mx << " " << res << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}