#include <bits/stdc++.h>
using namespace std;

bool inRange(long low, long high, long x)
{
    return ((x - high) * (x - low) <= 0);
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long s, t, a, b, m, n, i, j;

    long apples_count = 0, oranges_count = 0;

    cin >> s >> t >> a >> b >> m >> n;

    vector<long> apples, oranges;
    for (i = 0; i < m; i++)
    {
        cin >> j;
        apples.push_back(j);
    }
    for (i = 0; i < n; i++)
    {
        cin >> j;
        oranges.push_back(j);
    }

    for (i = 0; i < apples.size(); i++)
    {
        if (inRange(s, t, a + apples[i]))
            ++apples_count;
    }
    for (i = 0; i < oranges.size(); i++)
    {
        if (inRange(s, t, b + oranges[i]))
            ++oranges_count;
    }

    cout << apples_count << '\n'
         << oranges_count << '\n';

    return 0;
}