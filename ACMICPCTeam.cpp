#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, m, c = 0, s = 0, j, k, t;
    string i;
    cin >> n >> m;

    vector<bitset<500>> v;

    for (j = 0; j < n; j++)
    {
        cin >> i;
        v.push_back(bitset<500>(i));
    }

    for (j = 0; j < n - 1; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            t = bitset<500>(v[k] | v[j]).count();
            if (t == s)
            {
                c++;
            }
            else if (t > s)
            {
                c = 1;
                s = t;
            }
        }
    }

    cout << s << '\n'
         << c << '\n';

    return 0;
}