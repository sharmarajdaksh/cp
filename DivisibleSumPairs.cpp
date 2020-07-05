#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, k, i, j, t, cnt = 0;
    cin >> n >> k;

    vector<int> ar;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        ar.push_back(t);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
                ++cnt;
        }
    }

    cout << cnt << '\n';

    return 0;
}