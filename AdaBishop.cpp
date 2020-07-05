#include <bits/stdc++.h>
using namespace std;

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
        int ro, co, c = 0, m;
        string out = "";
        cin >> ro >> co;

        if (ro != co)
        {
            ro = co = floor((ro + co) / 2);
            out += to_string(ro) + " " + to_string(co) + "\n";
            c++;
        }
        if (ro != 1)
        {
            ro = co = 1;
            out += "1 1\n";
            c++;
        }
        ro++;
        co++;
        while (ro < 8 && co < 8)
        {
            out += to_string(ro) + " " + to_string(co) + "\n";
            c++;

            m = min(8 - ro, ro - 1);
            out += to_string(ro + m) + " " + to_string(co - m) + "\n";
            c++;
            out += to_string(ro - m) + " " + to_string(co + m) + "\n";
            c++;
            out += to_string(ro) + " " + to_string(co) + "\n";
            c++;

            ro++;
            co++;
        }

        out += "8 8\n";
        c++;

        cout << c << '\n';
        cout << out;
    }

    return 0;
}