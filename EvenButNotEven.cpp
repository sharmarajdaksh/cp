#include <bits/stdc++.h>
using namespace std;

class BigNum
{
public:
    vector<int> bignum;

    BigNum(long long n)
    {
        while (n != 0)
        {
            bignum.push_back(n % 10);
            n = n / 10;
        }
    }

    BigNum(string s)
    {
        for (unsigned int i = 0; i < s.size(); i++)
        {
            bignum.push_back((int)s[i] - 48);
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
        // reverse(o.begin(), o.end());
        return o;
    }

    bool isOdd()
    {
        return bignum[bignum.size() - 1] % 2;
    }

    long long sumDigits()
    {
        return accumulate(bignum.begin(), bignum.end(), 0);
    }

    bool sumDigitsIsEven()
    {
        return sumDigits() % 2 == 0;
    }

    void remove(int i)
    {
        bignum.erase(bignum.begin() + i);
    }
};

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;
        BigNum b = BigNum(s);

        if (b.isOdd() && b.sumDigitsIsEven())
        {
            cout << b.stringify() << '\n';
            continue;
        }

        if (!b.isOdd())
        {
            while (!b.isOdd())
            {
                b.bignum.pop_back();
                if (b.bignum.size() <= 0)
                {
                    break;
                }
            }
        }

        if (b.bignum.size() == 0 || b.bignum.size() == 1)
        {
            cout << "-1\n";
            continue;
        }

        if (b.sumDigitsIsEven())
        {
            cout << b.stringify() << '\n';
            continue;
        }

        int mark = -1;
        for (unsigned int i = 0; b.bignum.size() - 1; i++)
        {
            if (b.bignum[i] % 2)
            {
                mark = i;
                break;
            }
        }

        if (mark == -1 || b.bignum.size() == 1)
            cout << "-1\n";
        else
        {
            b.remove(mark);
            string str = b.stringify();
            cout << str.erase(0, min(str.find_first_not_of('0'), str.size() - 1)) << '\n';
            continue;
        }
    }

    return 0;
}