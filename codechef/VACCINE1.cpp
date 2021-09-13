#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    solve();

    return 0;
}

void solve()
{
    int d1, v1, d2, v2, p, d, p1, p2;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    d = (d1 < d2) ? d1 : d2;

    while (true)
    {
        d++;

        p1 = (d - d1) * v1;
        if (p1 < 0)
        {
            p1 = 0;
        }
        p2 = (d - d2) * v2;
        if (p2 < 0)
        {
            p2 = 0;
        }

        if (p1 + p2 >= p)
        {
            cout << (d - 1) << '\n';
            return;
        }
    }
}