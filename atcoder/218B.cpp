#include<bits/stdc++.h>
using namespace std;

int main() {
	string s = "";
	int t;

	for (int i = 0; i < 26; i++) {
		cin >> t;
		s.push_back((char) ('a' + t - 1));
	}

	cout << s << endl;
}