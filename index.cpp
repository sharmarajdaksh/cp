#include <bits/stdc++.h>
using namespace std;

long long f(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * f(n - 1);
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
        cout << f(N) << '\n';
    }

    return 0;
}