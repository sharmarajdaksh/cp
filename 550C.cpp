#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    string s, l4, l3;
    cin >> s;
    int z;

    z = s.size();

    if (z < 4)
    {
        if (stoi(s) % 8 == 0)
        {
            cout << "YES\n"
                 << s << '\n';
        }
        else if (stoi(s) == 10)
        {
            cout << "YES\n"
                 << "0" << '\n';
        }
        else if (stoi(s) == 100)
        {
            cout << "YES\n"
                 << "00" << '\n';
        }
        else if (stoi(s) == 1000)
        {
            cout << "YES\n"
                 << "000" << '\n';
        }
        else
        {
            cout << "NO\n";
        }
        return 0;
    }

    l4 = s.substr(z - 4, 4);

    for (int i = 0; i < 4; i++)
    {
        l3 = "";
        for (int j = 0; j < 4; j++)
        {
            if (j != i)
            {
                l3 += l4[j];
            }
        }
        if (stoi(l3) % 8 == 0)
        {
            cout << "YES\n"
                 << s.substr(0, z - 4) + l3 << '\n';
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}