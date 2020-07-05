#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    unsigned long n, i, b, m;
    unsigned int ar[6] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> b;
        ++ar[b];
    }

    m = b = 0;
    for (i = 1; i < 6; i++)
    {
        if (ar[i] > m)
        {
            m = ar[i];
            b = i;
        }
    }

    cout << b << '\n';

    return 0;
}