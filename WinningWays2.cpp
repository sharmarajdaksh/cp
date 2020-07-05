#include <bits/stdc++.h>
using namespace std;

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
        long long N, Q, x, L, R, z;
        unsigned long long i;
        vector<long long> A;
        cin >> N;

        for (i = 0; i < N; i++)
        {
            cin >> x;
            A.emplace_back(x);
        }

        cin >> Q;
        for (i = 0; i < Q; i++)
        {
            cin >> L >> R;
            vector<long long> a(A.begin() + L - 1, A.begin() + R);
            sort(a.begin(), a.end());
            unique(a.begin(), a.end());
            z = a.size();
            if (z % 2)
            {
                cout << z << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}