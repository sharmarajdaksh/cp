#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int n, i, j, t, a, b, g = 0;
    vector<unsigned int> v;

    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> t;
        v.push_back(t);
    }

    for (i = 0; i < n; ++i)
    {
        a = 0;
        b = 0;
        for (j = 0; j < n; ++j)
        {
            if (j == i)
                continue;
            if (v[j] == v[i] + 1 || v[j] == v[i])
                ++a;
            if (v[j] == v[i] - 1 || v[j] == v[i])
                ++b;
        }
        if (a > b)
        {
            if (a > g)
                g = a;
        }
        else
        {
            if (b > g)
                g = b;
        }
    }

    cout << g + 1 << '\n';

    return 0;
}