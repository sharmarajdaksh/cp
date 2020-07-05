#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, k, t, s = 0, p = 0, current_p;
    vector<int> a;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        current_p = 0;
        while ((a[i] % k != 0 && current_p < a[i] / k + 1) || (a[i] % k == 0 && current_p < a[i] / k))
        {
            current_p++;
            p++;
            if (p <= current_p * k && p > current_p * k - k && p <= a[i])
            {
                s++;
            }
        }
    }

    cout << s << '\n';

    return 0;
}