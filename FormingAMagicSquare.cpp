#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int a[3][3], g = 999, c = 0;
    unsigned int magic[8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };

    unsigned int i, j, k;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
            cin >> a[i][j];
    }

    for (k = 0; k < 8; k++)
    {
        c = 0;
        for (i = 0; i < 3; ++i)
        {
            for (j = 0; j < 3; ++j)
            {
                c += abs((int)(magic[k][i][j] - a[i][j]));
            }
        }
        if (c < g)
        {
            g = c;
            if (g == 0)
            {
                break;
            }
        }
    }

    cout << g << '\n';

    return 0;
}