#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T, t, n, k, i, p, c;
    bool y = false;

    cin >> T;

    for (t = 0; t < T; t++)
    {

        cin >> n >> k;

        c = 0;
        for (i = 0; i < n; ++i)
        {
            cin >> p;
            if (p <= 0)
            {
                c++;
            }
        }

        if (c < k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}