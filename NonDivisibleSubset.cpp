#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int n, k, i, t, m = 0;

    cin >> n >> k;

    vector<unsigned int> a(k, 0);
    for (i = 0; i < n; i++)
    {
        cin >> t;
        a[t % k]++;
    }

    for (i = 1; i < (k + 1) / 2; i++)
    {
        m += a[i] > a[k - i] ? a[i] : a[k - i];
    }
    m += (a[0] >= 1) + (k % 2 == 0 && a[k / 2]);

    cout << m << '\n';

    return 0;
}