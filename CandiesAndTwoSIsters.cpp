#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int t;
    cin >> t;

    while (t > 0)
    {

        long long n;
        cin >> n;
        if (n < 2)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << (n - 1) / 2 << '\n';
        }
        t--;
    }

    return 0;
}