#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool has7Decimal(long n)
    {
        while (n != 0)
        {
            if (n % 10 == 7)
            {
                return true;
            }
            n /= 10;
        }

        return false;
    }

    long getOctalRepresentation(long n)
    {
        int octal = 0, place = 1;
        while (n != 0)
        {
            octal += ((n % 8) * place);
            n /= 8;
            place *= 10;
        }

        return octal;
    }

    bool has7Octal(long n)
    {
        return has7Decimal(getOctalRepresentation(n));
    }

public:
    long numbersWith7InOctalAndDecimal(long n)
    {

        long count = 0;
        for (long i = n; i > 0; i--)
        {
            if (!has7Decimal(i) && !has7Octal(i))
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s = Solution();

    // assert(s.numbersWith7InOctalAndDecimal(20) == 17);
    // assert(s.numbersWith7InOctalAndDecimal(100000) == 30555);

    long n;
    cin >> n;
    cout << s.numbersWith7InOctalAndDecimal(n) << '\n';
}