#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int d1, m1, y1, d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (y1 > y2)
    {
        cout << 10000 << '\n';
    }
    else if (y1 == y2 && m1 > m2)
    {
        cout << 500 * (m1 - m2) << '\n';
    }
    else if (y1 == y2 && m1 == m2 && d1 > d2)
    {
        cout << 15 * (d1 - d2) << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }

    return 0;
}