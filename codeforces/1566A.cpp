#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n, s;
	cin >> n >> s;

	if (s < n) {
		cout << 0 << endl;
		return;
	}

	long long medianIndex = (n - 1) / 2;

	long long postMedianSum = s;

	long long maxMedian = postMedianSum / (n - medianIndex);

	cout << maxMedian << endl;
}

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
		solve();
	} 
}