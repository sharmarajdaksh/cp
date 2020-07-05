#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

long long findLCM(int arr[], int n)
{
    long long ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        ans = (arr[i] * ans) /
              gcd(arr[i], ans);
    }
    return ans;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int COUNT = 0;
    int b_gcd = findGCD(b, m);
    int a_lcm = findLCM(a, n);

    int a_lcm_init = a_lcm;
    while (a_lcm <= b_gcd)
    {
        if (b_gcd % a_lcm == 0)
            COUNT++;
        a_lcm += a_lcm_init;
    }

    cout << COUNT << '\n';

    return 0;
}