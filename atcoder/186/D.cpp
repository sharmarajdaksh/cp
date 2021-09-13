#include <bits/stdc++.h>
using namespace std;

long long sumOfDifferenceNaive(vector<long long> v, long size)
{
    long long sum = 0;
    for (long i = 0; i < size - 1; i++)
    {
        for (long j = i + 1; j < size; j++)
        {
            sum += (long long)abs(v[i] - v[j]);
        }
    }
    return sum;
}

long long sumOfDifference(vector<long long> v, long size)
{
    sort(v.begin(), v.end());

    long long totalSum = accumulate(v.begin(), v.end(), 0);

    long long ansSum = 0;

    for (long long i = 0; i < size; i++)
    {
        totalSum -= v[i];
        ansSum += (totalSum - (size - i - 1) * v[i]);
    }

    return ansSum;
}

int main()
{
    long n;
    cin >> n;
    vector<long long> a(n);
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long remainingSum = 0;
    for (long long e : a)
        remainingSum += e;

    long long ans = 0;

    for (long i = 0; i < n; i++)
    {
        remainingSum -= a[i];
        ans += (remainingSum - (n - i - 1) * a[i]);
    }

    cout << ans << endl;
}