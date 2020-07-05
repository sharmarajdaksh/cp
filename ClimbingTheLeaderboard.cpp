#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long long n, m, i, t;
    stack<unsigned long long> s;

    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> t;
        if (s.empty() || s.top() != t)
            s.push(t);
    }

    cin >> m;
    for (i = 0; i < m; ++i)
    {
        cin >> t;
        while (!s.empty() && t >= s.top())
            s.pop();
        cout << s.size() + 1 << '\n';
    }

    return 0;
}