#include <bits/stdc++.h>
using namespace std;

typedef unsigned long UL;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    UL n, p, f, b;

    cin >> n;
    cin >> p;

    f = floor(p / 2);

    if (n % 2)
    {
        n = n - 1;
    }
    b = floor((n - p + 1) / 2);

    cout << min(f, b) << '\n';

    return 0;
}