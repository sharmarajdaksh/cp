#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int T, t, a, b, x, y;
    cin >> T;

    for (t = 0; t < T; t++)
    {
        cin >> a >> b >> x >> y;

        // x * b, y * a, ((a - x) *b)

        cout << max(max(x * b, y * a), max((a - x - 1) * b, (b - y - 1) * a)) << '\n';
    }

    return 0;
}