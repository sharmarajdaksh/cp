#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(unsigned long long n)
{
    string s = to_string(n);
    int z = s.length();

    if (z == 1)
    {
        return true;
    }

    for (int i = 0; i < z / 2; i++)
    {
        if (s[i] != s[z - i - 1])
        {
            return false;
        }
    }

    return true;
}

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
        unsigned long long K;
        cin >> K;

        do
        {
            K++;
        } while (!isPalindrome(K));

        cout << K << '\n';
    }

    return 0;
}