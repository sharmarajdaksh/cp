#include<bits/stdc++.h>
using namespace std;

class Solution {
	bool check(string a, string b, string c) {
		if (a.size() > 1 && a[0] == '0' || b.size() > 1 && b[0] == '0')
			return false;

		string sum = add(a, b);
		if (c == sum) return true;

		if (c.size() <= sum.size() || sum.compare(c.substr(0, sum.size())) != 0)
			return false;

		return check(b, sum, c.substr(sum.size()));
	}

	string add(string n, string m){
        string res;
        int i = n.size() - 1, j = m.size() - 1, carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry
            			+ (i >= 0 ? (n[i--] - '0') : 0) 
            			+ (j >= 0 ? (m[j--] - '0') : 0);
            res.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        if (carry) res.push_back(carry + '0');
        reverse(res.begin(), res.end());
        return res;
    }

public:
    bool isAdditiveNumber(string s) {
    	int n = s.size();
    	for (int i = 1; i <= n / 2; i++) {
    		for (int j = 1; j <= n / 2; j++) {
    			if (check(s.substr(0, i), s.substr(i, j), s.substr(i+j))) 
    				return true;
    		}
    	}

    	return false;
    }
};

int main() {
	Solution* s = new Solution();
	// cout << s->isAdditiveNumber("112358") << endl;
	// cout << s->isAdditiveNumber("199100199") << endl;
	cout << s->isAdditiveNumber("123") << endl;
}