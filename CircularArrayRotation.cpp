#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long n, k, q, i, t;
    vector<unsigned long> a;

    cin >> n >> k >> q;

    for (i = 0; i < n; ++i)
    {
        cin >> t;
        a.push_back(t);
    }

    while (q > 0)
    {
        cin >> t;
        cout << a[(t - (k % n) + n) % n] << '\n';
        --q;
    }

    return 0;
}