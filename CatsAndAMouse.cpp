#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T, t, x, y, z, d;
    cin >> T;

    for (t = 0; t < T; t++)
    {
        cin >> x >> y >> z;

        d = abs(x - z) - abs(z - y);

        if (d == 0)
        {
            cout << "Mouse C\n";
        }
        else if (d > 0)
        {
            cout << "Cat B\n";
        }
        else
        {
            cout << "Cat A\n";
        }
    }

    return 0;
}