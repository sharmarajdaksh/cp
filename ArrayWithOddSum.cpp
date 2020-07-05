#include <bits/stdc++.h>
using namespace std;

bool hasAnOdd(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2)
        {
            return true;
        }
    }
    return false;
}

bool hasAnEven(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!(v[i] % 2))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int n, tmp;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }
        int size = v.size();
        if (size % 2 && hasAnOdd(v, n))
        {
            cout << "YES\n";
            continue;
        }
        else if (!(size % 2) && hasAnOdd(v, n) && hasAnEven(v, n))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }

    return 0;
}