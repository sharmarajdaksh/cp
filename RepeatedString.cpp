#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    string s, u;
    cin >> s;

    unsigned int z = s.size();
    unsigned long long n, l, r;
    cin >> n;

    l = n / z;
    r = n % z;
    u = s.substr(0, r);

    cout << count(s.begin(), s.end(), 'a') * l + count(u.begin(), u.end(), 'a');

    return 0;
}