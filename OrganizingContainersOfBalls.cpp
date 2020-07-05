#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int q;

    cin >> q;

    while (q > 0)
    {

        unsigned int n, i, j;
        cin >> n;

        vector<unsigned long long> c(n, 0), b(n, 0);
        unsigned long long M[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> M[i][j];
                b[j] += M[i][j];
                c[i] += M[i][j];
            }
        }

        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        if (c == b)
            cout << "Possible\n";
        else
            cout << "Impossible\n";

        q--;
    }

    return 0;
}