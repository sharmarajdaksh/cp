#include <bits/stdc++.h>
using namespace std;

typedef unsigned int UI;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    UI n, k, i, t;
    vector<UI> h;

    cin >> n >> k;
    for (i = 0; i < n; ++i)
    {
        cin >> t;
        h.push_back(t);
    }

    t = *max_element(h.begin(), h.end());
    if (k > t)
        cout << 0 << '\n';
    else
        cout << t - k << '\n';

    return 0;
}