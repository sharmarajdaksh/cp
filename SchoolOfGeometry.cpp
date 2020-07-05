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
    unsigned long N, i;
    unsigned long long k, S = 0;
    vector<unsigned long long> A, B;

    for (int t = 0; t < T; t++)
    {
        A.clear();
        B.clear();
        S = 0;

        cin >> N;
        for (i = 0; i < N; i++)
        {
            cin >> k;
            A.push_back(k);
        }
        for (i = 0; i < N; i++)
        {
            cin >> k;
            B.push_back(k);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for (i = 0; i < N; i++)
        {
            S += A[i] > B[i] ? B[i] : A[i];
        }

        cout << S << '\n';
    }

    return 0;
}