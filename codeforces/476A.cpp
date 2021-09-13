#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    solve();

    return 0;
}

void solve()
{
    long long n, m;
    cin >> n >> m;

    for (long j = 1; j <= n; j++)
    {
        long x = (n + j) / 2;
        if (x % m == 0)
        {
            cout << x << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}