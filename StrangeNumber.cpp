#include <bits/stdc++.h>
using namespace std;

long long prime_factors(long long n)
{
    long long s = 0;

    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        s++;
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            s++;
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        s++;

    return s;
}

void solve()
{
    long x, k;
    cin >> x >> k;

    // https://mathforum.org/library/drmath/view/55843.html helped a lot!
    cout << (prime_factors(x) >= k ? 1 : 0) << '\n';
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