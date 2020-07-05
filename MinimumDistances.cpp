#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long n, t;
    cin >> n;
    vector<int> a;

    for (unsigned long i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    if (set<int>(a.begin(), a.end()).size() == n)
    {
        cout << -1 << '\n';
        return 0;
    }

    unsigned long min = n - 1;
    for (unsigned long i = 0; i < n; i++)
    {
        for (unsigned long k = i + 1; k < n && k < i + min; k++)
        {
            if (a[i] == a[k] && k - i < min)
            {
                min = k - i;
            }
        }
    }

    cout << min << '\n';

    return 0;
}