#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long N, P, K;
	cin >> N >> P >> K;

	int ans = 0;
	int req_k = P % K;

	for (int k = 0; k < req_k; k++) {
		ans += (N - k) / K + ((N - k) % K != 0);
	}

	ans += (P - req_k) / K + 1;

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}
