#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, c;
    string w, b;
    vector<int> wv, bv;

    cin >> n;
    cin >> c;
    cin >> w;
    cin >> b;

    if (w != "-1")
    {
        for (int i = 0; i < w.size(); i++)
        {
            wv.push_back((int)w[i] - 48);
        }
    }
    if (b != "-1")
    {
        for (int i = 0; i < b.size(); i++)
        {
            wv.push_back((int)w[i] - 48);
        }
    }

    return 0;
}