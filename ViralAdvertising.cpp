#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long long int n, i, r, l, s;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    r = 5;
    l = 0;
    s = 0;
    for (i = 0; i < n; i++)
    {
        s = r / 2;
        l += s;
        r = s * 3;
    }

    cout << l << '\n';

    return 0;
}