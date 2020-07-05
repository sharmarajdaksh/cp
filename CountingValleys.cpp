#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    long long n, h = 0, v = 0;
    string path;

    cin >> n;
    cin >> path;

    for (size_t i = 0; i < path.size(); i++)
    {
        if (path[i] == 'U')
        {
            ++h;
            if (h == 0)
                ++v;
        }
        else
        {
            --h;
        }
    }

    cout << v << '\n';

    return 0;
}