#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long t, n, x, i, j;
    cin >> n >> t;
    vector<long> w;
    for (long k = 0; k < n; k++)
    {
        cin >> x;
        w.push_back(x);
    }

    while (t)
    {
        cin >> i >> j;

        cout << *min_element(w.begin() + i, w.begin() + j + 1) << '\n';

        t--;
    }

    return 0;
}