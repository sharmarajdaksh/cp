#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int n, i, t;
    map<unsigned int, unsigned int> m;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (m.find(t) == m.end())
        {
            m[t] = 1;
        }
        else
        {
            m[t]++;
        }
    }

    auto pr = max_element(
        begin(m), end(m),
        [](const pair<unsigned int, unsigned int> &p1, const pair<unsigned int, unsigned int> &p2) {
            return p1.second < p2.second;
        });

    cout << n - pr->second << '\n';

    return 0;
}