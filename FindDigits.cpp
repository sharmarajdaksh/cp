#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int T;
    unsigned long long n, c, d, r;
    cin >> T;

    for (unsigned int t = 0; t < T; t++)
    {
        cin >> n;
        c = n;
        d = 0;

        while (c != 0)
        {
            r = c % 10;
            c = c / 10;

            if (r != 0 && n % r == 0)
                ++d;
        }

        cout << d << '\n';
    }

    return 0;
}