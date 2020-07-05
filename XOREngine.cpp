#include <bits/stdc++.h>
using namespace std;

// Observation is ,

// 1 ) If two numbers where both numbers have odd number of set bits in it then its XOR will have even number of set bits in it.

// 2 ) If two numbers where both numbers have even number of set bits in it then its XOR will have even number of set bits in it.

// 1 ) If two numbers where one number has even number of set bits and another has odd number of set bits then its XOR will have odd number of set bits in it.

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
        long long N, Q, i, x, o, c;
        bool P;
        cin >> N >> Q;
        c = 0;
        for (i = 0; i < N; i++)
        {
            cin >> x;
            if (__builtin_popcountll(x) % 2)
                c++;
        }
        for (i = 0; i < Q; i++)
        {
            cin >> x;
            P = __builtin_popcountll(x) % 2;
            if (P)
            {
                o = N - c;
            }
            else
            {
                o = c;
            }
            cout << N - o << ' ' << o << '\n';
        }
    }
    return 0;
}