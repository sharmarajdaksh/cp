#include <bits/stdc++.h>
using namespace std;

long long z(long long n)
{
    long long z = 0;
    long long p = 5;

    while (n / p != 0)
    {
        z += n / p;
        p *= 5;
    }

    return z;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long long T, N, t;
    cin >> T;

    for (t = 0; t < T; t++)
    {
        cin >> N;
        cout << z(N) << '\n';
    }

    return 0;
}