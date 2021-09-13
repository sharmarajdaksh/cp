#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

    int testCases;
    cin >> testCases;

    while (testCases)
    {
        solve();

        testCases--;
    }

    return 0;
}

void solve()
{
    long n, k, d;
    cin >> n >> k >> d;

    long long sum = 0;

    vector<long> a(n);

    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << min(sum / k, (long long)d) << endl;
}