#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int n, k, i, t, e = 100;
    cin >> n >> k;

    vector<unsigned int> c;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        c.push_back(t);
    }

    e -= n / k;
    for (i = 0; i < n; i += k)
    {
        if (c[i] == 1)
            e -= 2;
    }

    cout << e;

    return 0;
}