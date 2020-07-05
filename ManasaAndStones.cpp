#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T, n, a, b;
    cin >> T;
    set<int> c;

    for (int t = 0; t < T; t++)
    {
        cin >> n;
        cin >> a;
        cin >> b;

        c.clear();
        for (int i = 0; i < n; i++)
        {
            c.insert((i)*a + (n - i - 1) * b);
        }

        for (auto i = c.begin(); i != c.end(); i++)
        {
            cout << *i << ' ';
        }

        cout << '\n';
    }

    return 0;
}