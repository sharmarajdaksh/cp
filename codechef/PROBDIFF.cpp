#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		unordered_set<int> questions;
		int tmp;
		vector<int> freq(10, 0);

		int max_freq = 0;
		for (int i = 0; i < 4; i++) {
			cin >> tmp;
			freq[tmp - 1]++;
			max_freq = max(max_freq, freq[tmp - 1]);
		}

		int ans;
		if (max_freq == 1) {
			ans = 2;
		} else if (max_freq == 2) {
			ans = 2;
		} else if (max_freq == 3) {
			ans = 1;
		} else if (max_freq == 4) {
			ans = 0;
		}

		cout << ans << endl;
	}
}