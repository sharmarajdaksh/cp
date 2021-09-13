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
    long long n, x;
    cin >> n >> x;

    string ss;
    cin >> ss;

    for (char s : ss)
    {
        if (s == 'o')
        {
            x++;
        }
        else if (x > 0)
        {
            x--;
        }
    }

    cout << x << '\n';
}