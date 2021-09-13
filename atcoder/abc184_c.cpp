#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    solve();

    return 0;
}

bool cond(long long r1, long long c1, long long r2, long long c2)
{
    return ((r1 + c1) == (r2 + c2)) ||
           ((r1 - c1) == (r2 - c2)) ||
           ((abs(r1 - r2) + abs(c1 - c2)) <= 3);
}

void solve()
{
    long long r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (r1 == r2 && c1 == c2)
    {
        cout << 0 << '\n';
        return;
    }

    if (cond(r1, c1, r2, c2))
    {
        cout << 1 << '\n';
        return;
    }

    if ((r1 + c1) % 2 == (r2 + c2) % 2)
    {
        cout << 2 << '\n';
        return;
    }

    for (int i = -3; i <= 3; i++)
    {
        for (int j = -3; j <= 3; j++)
        {
            if (abs(i) + abs(j) <= 3)
            {
                if (cond(r1 + i, c1 + j, r2, c2))
                {
                    cout << 2 << '\n';
                    return;
                }
            }
        }
    }

    cout << 3 << '\n';
}
