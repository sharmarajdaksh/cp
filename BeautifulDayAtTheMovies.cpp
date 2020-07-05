#include <bits/stdc++.h>
using namespace std;

unsigned long long reverseInt(unsigned long long n)
{

    unsigned long long reversedNumber = 0, remainder = 0;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    return reversedNumber;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    unsigned long long i, j, k, c = 0;

    cin >> i >> j >> k;

    for (i; i <= j; i++)
    {
        if (abs((long long)(i - reverseInt(i))) % k == 0)
            c++;
    }

    cout << c << '\n';

    return 0;
}