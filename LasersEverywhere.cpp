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
        unsigned long N, Q, i, j, x1, x2, y, c;
        vector<unsigned long long> A;
        cin >> N >> Q;
        for (i = 0; i < N; i++)
        {
            cin >> j;
            A.emplace_back(j);
        }
        for (i = 0; i < Q; i++)
        {
            cin >> x1 >> x2 >> y;
            c = 0;
            for (; x1 < x2; x1++)
            {
                c += ((A[x1 - 1] <= y && A[x1] >= y) || (A[x1] <= y && A[x1 - 1] >= y));
            }
            printf("%lu\n", c);
        }
    }
    return 0;
}