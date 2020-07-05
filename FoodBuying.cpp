#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long T;
    unsigned long long s;
    cin >> T;

    for (unsigned long t = 0; t < T; t++)
    {
        cin >> s;
        unsigned long long b = 0;
        if (s >= 10)
        {
            b = (((s - 10) / 9) + 1) * 10;
        }
        b += s % 9;
        cout << b << '\n';
    }

    return 0;
}