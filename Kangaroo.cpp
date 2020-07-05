#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long long x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    // x1 + y * v1 = x2 + y * v2
    // y = (x2 - x1)/(v1 - v2)

    if (v1 > v2 && (x2 - x1) % (v2 - v1) == 0)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}