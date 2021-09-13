#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

    int testCases;
    cin >> testCases;

    while (testCases)
    {
        solve();

        testCases--;
    }

    return 0;
}

void solve()
{
    long long n, d, ar = 0, nr = 0;
    cin >> n >> d;

    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= 80 || a[i] <= 9)
        {
            ar++;
        }
        else
        {
            nr++;
        }
    }

    long long dn = 0;
    dn += (ar / d) + (nr / d);
    if (ar % d != 0)
    {
        dn++;
    }
    if (nr % d != 0)
    {
        dn++;
    }

    cout << dn << "\n";
}