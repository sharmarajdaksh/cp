#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int g;
    cin >> g;

    while (g > 0)
    {
        int n, c;
        string s;
        unsigned int i;
        bool f;

        cin >> n;
        cin >> s;

        if (count(s.begin(), s.end(), '_') == 0)
        {
            f = false;
            for (i = 1; i < s.size() - 1; i++)
            {
                if (s[i - 1] != s[i] && s[i] != s[i + 1])
                {
                    cout << "NO\n";
                    f = true;
                    break;
                }
            }
            if (f)
            {
                g--;
                continue;
            }
        }

        f = false;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != '_' && count(s.begin(), s.end(), s[i]) == 1)
            {
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "YES\n";
        }

        g--;
    }

    return 0;
}