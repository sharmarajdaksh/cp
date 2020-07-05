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
    unsigned long long b, w, bc, wc, z;

    for (int t = 0; t < T; t++)
    {

        cin >> b >> w;
        cin >> bc >> wc >> z;

        if (bc > wc + z)
        {
            cout << b * z + (b + w) * wc << '\n';
        }
        else if (wc > bc + z)
        {
            cout << (b + w) * bc + w * z
                 << '\n';
        }
        else
        {
            cout << b * bc + w * wc << '\n';
        }
    }

    return 0;
}