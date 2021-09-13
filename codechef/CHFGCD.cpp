#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void solve() {
	int x, y;
	cin >> x >> y;

	if (x > y) swap(x, y);

	if ((x % 2 == 0 && y % 2 == 0) || gcd(x, y) > 1) {
		cout << 0 << endl;
		return;
	}

	if (((x + 1) % 2 && !(y % 2)) || ((y + 1) % 2 && !(x % 2)) ||  gcd(x, y + 1) > 1 || gcd(x + 1, y) > 1) {
		cout << 1 << endl;
		return;
	}

	cout << 2 << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}