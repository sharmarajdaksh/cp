#include<bits/stdc++.h>
using namespace std;

class Solution {
	int toDigit(char c) {
		return ((int)(c - '0'));
	}
public:
    int minPartitions(string n) {
    	int  max = 0;
 		for (char c: n) {
 			if (toDigit(c) > max) {
 				max = toDigit(c);
 			}
 		}

 		return max;
    }
};

int main() {
	string n;
	cin >> n;
	Solution s = Solution();
	cout << s.minPartitions(n) << endl;
}