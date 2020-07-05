#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    unsigned int n, i, t, j;
    vector<unsigned int> c;
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> t;
        c.push_back(t);
    }

    i = 0;
    j = 0;
    while (i < n - 1)
    {
        if (i + 2 < n && c[i + 2] == 0)
            i += 2;
        else if (i + 1 < n)
            ++i;
        ++j;
    }

    cout << j << '\n';

    return 0;
}