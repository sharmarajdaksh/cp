#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    unsigned long N, i;
    unsigned long long K, k, c, r;
    vector<unsigned long long> A;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        cin >> N >> K;

        A.clear();
        for (i = 0; i < N; i++)
        {
            cin >> k;
            A.push_back(k);
        }

        c = 0;

        for (i = 0; i < N; i++)
        {
            r = A[i] % K;
            if (r == 0)
                continue;

            if (K - r < c)
            {
                c -= (K - r);
                continue;
            }
            c += r;
        }

        if (c >= K)
        {
            c %= K;
        }

        cout << c << '\n';
    }

    return 0;
}