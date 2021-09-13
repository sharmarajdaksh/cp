#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	long cth;
	for (int i = 2; c > 0; i++) {
		if (i % a == 0 || i % b == 0) {
			c--;
			cth = i;
		}
	}

	int step = a;
	if (cth % a == 0 || cth % b == 0) {
		step = lcm(a, b);
	}
	else if (cth % b == 0) {
		step = b;
	}

	while (cth >= 0) {
		cout << cth << " ";
		cth -= step;
	}

}