#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    solve();

    return 0;
}

bool cmp(pair<string, int> const &a, pair<string, int> const &b)
{
    return a.second > b.second;
};

void solve()
{
    int n;
    string t;

    map<string, int> s;

    cin >> n;
    while (n--)
    {
        cin >> t;
        if (s.find(t) != s.end())
        {
            s[t]++;
        }
        else
        {
            s[t] = 1;
        }
    }

    vector<pair<string, int>> v;
    for (auto &it : s)
    {
        v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    cout << v.begin()->first << endl;
}