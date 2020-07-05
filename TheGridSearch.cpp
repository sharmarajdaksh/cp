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
        int R, C, r, c;
        string sx;
        bool flag;
        vector<string> G, P;

        cin >> R >> C;

        for (int i = 0; i < R; i++)
        {
            cin >> sx;
            G.push_back(sx);
        }

        cin >> r >> c;
        for (int i = 0; i < r; i++)
        {
            cin >> sx;
            P.push_back(sx);
        }

        flag = true;
        for (int i = 0; i < R - r + 1; i++)
        {
            for (int j = 0; j < C - c + 1; j++)
            {
                flag = true;
                for (int k = i; k < i + r; k++)
                {
                    if (G[k].substr(j, c) != P[k - i])
                    {
                        // cout << i << " " << j << " : " << G[k].substr(j, c) << " " << P[k - i] << '\n';
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "YES\n";
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }

        if (!flag)
        {
            cout << "NO\n";
        }
    }

    return 0;
}