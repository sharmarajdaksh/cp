#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    solve();

    return 0;
}

void solve()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // additional cost per incorrect choice
        int acic = i - 1;
        // number of incorrect choices
        int noic = n - i;
        // cost of all incorrect choices
        int caic = (noic * (acic + 1));
        // cost for level = caic + 1 (for the correct choice button)
        ans += caic + 1;
    }

    cout << ans;
}