#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    cout << ((w % 2 == 0 && w > 2) ? "YES" : "NO") << '\n';

    return 0;
}
