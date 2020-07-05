#include <bits/stdc++.h>
using namespace std;

class BigNum
{
    vector<int> bignum;

public:
    BigNum(long long n)
    {
        while (n != 0)
        {
            bignum.push_back(n % 10);
            n = n / 10;
        }
    }

    void multiply(int n)
    {
        int c = 0;
        int q = 0;
        for (unsigned int i = 0; i < bignum.size(); i++)
        {
            q = bignum[i] * n + c;
            bignum[i] = q % 10;
            c = q / 10;
        }
        while (c != 0)
        {
            bignum.push_back(c % 10);
            c /= 10;
        }
    }

    string stringify()
    {
        string o = "";
        for (unsigned int i = 0; i < bignum.size(); i++)
        {
            o.append(to_string(bignum[i]));
        }
        reverse(o.begin(), o.end());
        return o;
    }
};

BigNum f(int n)
{
    if (n == 0 || n == 1)
    {
        return BigNum(1);
    }
    BigNum b = f(n - 1);
    b.multiply(n);
    return b;
}

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int N, i;
    string fs;

    cin >> N;
    BigNum b = BigNum(N);
    for (i = 1; i < N; i++)
    {
        b.multiply(i);
    }
    cout << b.stringify() << '\n';

    return 0;
}