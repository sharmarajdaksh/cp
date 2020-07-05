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
        long n;
        map<long, long> m;

        cin >> n;

        for (long i = 1; i <= n; i++)
        {
            m[i] = 0;
        }

        long x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }

        vector<long> v;

        map<long, long>::iterator it = m.begin();
        while (it != m.end())
        {
            x = it->second;
            if (x != 0)
            {
                v.push_back(x);
            }
            it++;
        }

        sort(v.begin(), v.end());

        long z = v.size();
        long freq = v[z - 1];

        // cout << z << ' ' << freq << ' ';

        if (freq > z)
        {
            cout << z;
        }
        else if (z == freq)
        {
            cout << freq - 1;
        }
        else
        {
            cout << freq;
        }

        cout << '\n';
    }

    return 0;
}