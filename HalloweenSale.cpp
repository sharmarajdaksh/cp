#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long m, p, d, s, c;

    cin >> p >> d >> m >> s;

    s -= p;

    if (s < 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    c = 1;
    p -= d;

    while (s >= p && p > m)
    {
        s -= p;
        c++;
        p -= d;
    }

    if (p <= m)
        c += s / m;

    cout << c << '\n';

    return 0;
}
