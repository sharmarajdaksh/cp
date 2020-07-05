#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    int n, t;
    string s;

    cin >> n;

    vector<vector<int>> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        v.clear();
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            v.push_back((int)s[j] - 48);
        }
        m.push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t = m[i][j];
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << t;
                continue;
            }

            if (t > m[i - 1][j] && t > m[i + 1][j] && t > m[i][j + 1] && t > m[i][j - 1])
            {
                cout << 'X';
            }
            else
            {
                cout << t;
            }
        }

        cout << '\n';
    }

    return 0;
}