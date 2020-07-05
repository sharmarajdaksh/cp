#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned int n, i, t, m;
    vector<unsigned int> a;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    while (a.size() > 0)
    {
        cout << a.size() << '\n';
        m = *min_element(a.begin(), a.end());
        transform(a.begin(), a.end(), a.begin(), [m](unsigned int x) { return x - m; });
        a.erase(remove(a.begin(), a.end(), 0), a.end());
    }

    return 0;
}