#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, m, i, iter_k, iter_d;
    long long b, t;
    vector<long long> k = {}, d = {}, s = {};

    cin >> b >> n >> m;

    for (i = 0; i < n; i++)
    {
        cin >> t;
        k.push_back(t);
    }

    for (i = 0; i < m; i++)
    {
        cin >> t;
        d.push_back(t);
    }

    // sort(k.begin(), k.end());
    // sort(d.begin(), d.end());

    // if (d[0] + k[0] > b)
    // {
    //     cout << -1 << '\n';
    //     return 0;
    // }

    // if (d[d.size() - 1] + k[k.size() - 1] < b)
    // {
    //     cout << d[d.size() - 1] + k[k.size() - 1] << '\n';
    // }

    for (iter_k = 0; iter_k < n; ++iter_k)
    {
        for (iter_d = 0; iter_d < m; ++iter_d)
        {
            t = k[iter_k] + d[iter_d];
            if (t <= b)
                s.push_back(t);
        }
    }

    if (s.size())
    {
        cout << *max_element(s.begin(), s.end()) << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}
