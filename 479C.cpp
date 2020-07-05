#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n;
    vector<pair<long long, long long>> v;
    long long at, bt;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> at >> bt;
        v.push_back(pair<long long, long long>(at, bt));
    }

    sort(v.begin(), v.end());

    bt = -1;
    for (int i = 0; i < n; i++)
    {
        if (bt <= v[i].second)
        {
            bt = v[i].second;
        }
        else
        {
            bt = v[i].first;
        }
    }

    cout << bt << '\n';

    return 0;
}