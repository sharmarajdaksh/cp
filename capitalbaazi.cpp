#include<bits/stdc++.h>
using namespace std;

int main() {
	while(true) {
		string s;
		cin >> s;
		if (s.size() == 0) break;

		for (char c: s) {
			cout << (char)(c - ('a' - 'A'));
		}
		cout << endl;
	}
}