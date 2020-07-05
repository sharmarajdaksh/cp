#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long n, m, t, i;
    vector<long> v, mx;

    cin >> n >> m;

    for (i = 0; i < m; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    for (i = 0; i < m + 1; i++)
    {
        if (i == 0)
            mx.push_back(v[i]);
        else if (i == m)
            mx.push_back((n - 1) - v[m - 1]);
        else
            mx.push_back((v[i] - v[i - 1]) / 2);
    }

    cout << *max_element(mx.begin(), mx.end()) << '\n';

    return 0;
}