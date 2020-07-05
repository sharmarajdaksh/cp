#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T, N, i, j, k, l, p, M[4][4] = {0}, n, s = 0, o = 0, m;
    vector<int> v;
    char c;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        cin >> N;

        m = numeric_limits<int>::min();

        for (i = 0; i < 4; i++)
            for (j = 0; j < 4; j++)
                M[i][j] = 0;

        for (i = 0; i < N; i++)
        {
            cin >> c;
            cin >> n;
            switch (c)
            {
            case 'A':
                M[0][(n / 3) - 1] += 1;
                break;
            case 'B':
                M[1][(n / 3) - 1] += 1;
                break;
            case 'C':
                M[2][(n / 3) - 1] += 1;
                break;
            case 'D':
                M[3][(n / 3) - 1] += 1;
                break;
            }
        }

        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (i == j)
                    continue;

                for (k = 0; k < 4; k++)
                {
                    if (i == k || j == k)
                        continue;

                    for (l = 0; l < 4; l++)
                    {
                        if (i == l || j == l || k == l)
                            continue;

                        v.clear();
                        s = 0;

                        v.push_back(M[0][i]);
                        v.push_back(M[1][j]);
                        v.push_back(M[2][k]);
                        v.push_back(M[3][l]);

                        sort(v.begin(), v.end());

                        for (p = 0; p < 4; p++)
                        {
                            if (v[p] == 0)
                            {
                                s -= 100;
                            }
                            else
                            {
                                s += (25 * (p + 1)) * v[p];
                            }
                        }

                        if (s > m)
                            m = s;
                    }
                }
            }
        }

        cout << m << '\n';
        o += m;
    }

    cout << o << '\n';

    return 0;
}