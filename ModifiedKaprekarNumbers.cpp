#include <bits/stdc++.h>
using namespace std;

bool isModifiedKaprekar(unsigned long long n)
{
    unsigned long long sqr = n * n;
    long nl = to_string(n).size();
    string sq = to_string(sqr);
    long sql = sq.size();
    unsigned long long l, r;
    if (sql % 2)
    {
        if (sq.substr(0, nl - 1) == "")
        {
            l = 0;
        }
        else
        {
            l = stoll(sq.substr(0, nl - 1));
        }
        r = stoll(sq.substr(nl - 1, sql));
    }
    else
    {
        l = stoll(sq.substr(0, nl));
        r = stoll(sq.substr(nl, sql));
    }

    return r + l == n;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long long p, q, i;
    bool y = true;

    cin >> p >> q;

    for (i = p; i <= q; i++)
    {
        if (isModifiedKaprekar(i))
        {
            cout << i << ' ';
            y = false;
        }
    }

    if (y)
    {
        cout << "INVALID RANGE\n";
    }

    return 0;
}