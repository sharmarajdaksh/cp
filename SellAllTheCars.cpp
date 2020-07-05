#include <bits/stdc++.h>
using namespace std;

unsigned long long MOD = 1000000007;

void solve()
{
    long n;
    cin >> n;
    vector<long long> P;
    long long p, s = 0;

    for (long i = 0; i < n; i++)
    {
        cin >> p;
        P.push_back(p);
    }

    sort(P.rbegin(), P.rend());

    for (int i = 0; i < n; i++)
    {
        P[i] = max(P[i] - i, (long long)0);

        s = (s % MOD + P[i] % MOD) % MOD;
    }

    cout << s << '\n';
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        solve();
    }

    return 0;
}