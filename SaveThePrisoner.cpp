#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    unsigned long long n, m, s, r;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        cin >> n >> m >> s;
        if (((s + (m % n) - 1) % n) == 0)
        {
            cout << n;
        }
        else
        {
            cout << ((s + (m % n) - 1) % n);
        }
        cout << '\n';
    }

    return 0;
}