#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    unsigned int n, i, t;
    cin >> n;

    vector<unsigned int> p;
    p.push_back(0);
    for (i = 0; i < n; ++i)
    {
        cin >> t;
        p.push_back(t);
    }

    vector<unsigned int> v(n + 1, 0);

    for (i = 1; i < n + 1; ++i)
    {
        v[p[p[i]]] = i;
    }

    for (i = 1; i < n + 1; ++i)
    {
        cout << v[i] << '\n';
    }

    return 0;
}