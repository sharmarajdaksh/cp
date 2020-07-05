#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    LL n, k, i, b, t, d;
    vector<LL> v;

    cin >> n >> k;

    for (i = 0; i < n; ++i)
    {
        cin >> t;
        v.push_back(t);
    }

    cin >> b;

    d = b - (accumulate(v.begin(), v.end(), 0) - v[k]) / 2;
    d ? cout << d << '\n' : cout << "Bon Appetit\n";

    return 0;
}