#include<bits/stdc++.h>
using namespace std;

void solve() {
	int tmp, sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		sum += tmp;
	}

	if (sum == 0 || sum == 3) {
		cout << 0;
	} else {
		cout << 1;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}