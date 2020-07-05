#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    LL n, i, t, c = 0;
    vector<LL> a = {};

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (find(a.begin(), a.end(), t) != a.end())
        {
            ++c;
            a.erase(remove(a.begin(), a.end(), t), a.end());
        }
        else
        {
            a.push_back(t);
        }
    }

    cout << c << '\n';

    return 0;
}