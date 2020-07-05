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
        int M, N, i, x;
        cin >> N >> M;
        vector<int> F, c(M, -1);
        for (i = 0; i < N; i++)
        {
            cin >> x;
            F.push_back(x);
        }
        for (i = 0; i < N; i++)
        {
            cin >> x;
            c[F[i] - 1] += c[F[i] - 1] == -1 ? x + 1 : x;
        }
        c.erase(remove(c.begin(), c.end(), -1), c.end());

        cout << *min_element(c.begin(), c.end()) << '\n';
    }

    return 0;
}