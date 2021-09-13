#include<bits/stdc++.h>
using namespace std;

void numberOfMatches(int n) {
	int res = 0;

	while (n > 1) {
		if (n % 2) {
			res++;
			n--;
		}

		res += n / 2;
		n /= 2;
	}

	cout << res << endl;
}

int main(int argc, char *a[])
{
    //Write code here
    int t, n;
    cin >> t;
    while (t--) {
    	cin >> n;
    	numberOfMatches(n);
    }
}
