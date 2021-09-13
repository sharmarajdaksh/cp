#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> fts;
    vector<string> text(n);

    string tmpf, tmps;
    for (int i = 0; i < m; i++)
    {
        cin >> tmpf >> tmps;
        fts[tmpf] = tmps;
    }

    string tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp.length() > fts[tmp].length())
        {
            cout << fts[tmp] << " ";
        }
        else
        {
            cout << tmp << " ";
        }
    }
}