#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

    int testCases;
    cin >> testCases;

    while (testCases)
    {
        solve();

        testCases--;
    }

    return 0;
}

void solve()
{
    long long a, b;
    cin >> a >> b;

    long long oa, ob, ea, eb;

    oa = ea = a / 2;
    if (a % 2)
    {
        oa++;
    }

    ob = eb = b / 2;
    if (b % 2)
    {
        ob++;
    }

    cout << ((oa * ob) + (ea * eb)) << '\n';
}