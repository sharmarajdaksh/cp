#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, i, t, g;
    vector<int> b;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> t;
        b.push_back(t);
    }
    g = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (b[i] % 2)
        {
            b[i]++;
            b[i + 1]++;
            g += 2;
        }
    }

    if (b[n - 1] % 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << g << '\n';
    }

    return 0;
}