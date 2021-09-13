#include<bits/stdc++.h>
using namespace std;

int main() {
	string x;
	cin >> x;


	int s = 0;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] < 'a') {
			x[i] += 'a' - 'A';
			s += (int) x[i];
		} else {
			x[i] -= 'a' - 'A';
			s -= (int) x[i];
		}
	}

	s = abs(s);

	bool isPrime = true;
	for (int i = 2; i * i <= s; i++) {
		if (s % i == 0) {
			isPrime = false;
			break;
		}
	}

	cout << (int) isPrime << endl;
}