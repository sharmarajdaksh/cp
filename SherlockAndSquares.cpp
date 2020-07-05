#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned int q, t;
    unsigned long long a, b, x;
    cin >> q;

    for (t = 0; t < q; t++)
    {
        cin >> a >> b;

        x = floor(sqrt(b)) - ceil(sqrt(a));

        cout << (x >= 0 ? x + 1 : 0) << '\n';
    }

    return 0;
}