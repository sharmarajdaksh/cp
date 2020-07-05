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
        int n, k, x, i, j;
        cin >> n >> k;
        vector<vector<int>> a;
        vector<int> v;

        for (i = 0; i < k; i++)
        {
            v.clear();
            for (j = 0; j < n; j++)
            {
                cin >> x;
                v.push_back(x);
            }
            a.push_back(v);
        }
    }

    return 0;
}