#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int s1 = 0, s2 = 0, tmp = 0;
		cin >> tmp; // g1
		s1 += tmp;
		cin >> tmp; // s1
		s1 += tmp;
		cin >> tmp; // b1
		s1 += tmp;
		cin >> tmp; // g2
		s2 += tmp;
		cin >> tmp; // s2
		s2 += tmp;
		cin >> tmp; // b2
		s2 += tmp;

		cout << ((s1 > s2) ? "1" : "2") << endl;  	
	}
}