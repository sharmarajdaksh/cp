#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    string s, t;
    unsigned int k, i, ss, ts, max;
    cin >> s;
    cin >> t;
    cin >> k;

    ss = s.size();
    ts = t.size();

    for (i = 0; i < ss; ++i)
    {
        if (i >= ts || i >= ss || s[i] != t[i])
            break;
    }

    max = ts + ss;

    if (max <= k + i * 2 && max % 2 == k % 2 || max < k)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}