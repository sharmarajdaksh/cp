#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int T, t, h, n, i;
    cin >> T;

    for (t = 0; t < T; t++)
    {
        cin >> n;
        h = 1;
        for (i = 0; i < n; ++i)
        {
            i % 2 ? h += 1 : h *= 2;
        }

        cout << h << '\n';
    }

    return 0;
}