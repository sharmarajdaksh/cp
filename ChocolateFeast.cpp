#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        long n, c, m, s = 0, w = 0, x;

        cin >> n >> c >> m;
        s += n / c;
        w += s;

        while (w >= m)
        {
            x = w / m;
            w -= x * m;
            w += x;
            s += x;
        }

        cout << s << '\n';
    }

    return 0;
}