#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int t;
    unsigned long a, b, p, i, z;
    char l;
    string s;
    cin >> t;
    vector<unsigned long> n, c;

    while (t != 0)
    {
        cin >> a >> b >> p;
        cin >> s;
        z = s.size();

        l = 'C';

        for (i = 0; i < z; i++)
        {
            if (s[i] == l)
            {
                continue;
            }
            else
            {
                l = s[i];
                c.push_back(l == 'A' ? a : b);
                n.push_back(i);
            }
        }

        reverse(c.begin(), c.end());
        reverse(n.begin(), n.end());

        i = 0;
        while (i < c.size() && p > 0)
        {
            p -= c[i];
            i++;
        }

        if (p > 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << i << '\n';
        }

        t--;
    }

    return 0;
}
