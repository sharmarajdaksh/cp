#include <bits/stdc++.h>
using namespace std;

string numbers_to_words[] = {
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    "twenty",
    "twenty one",
    "twenty two",
    "twenty three",
    "twenty four",
    "twenty five",
    "twenty six",
    "twenty seven",
    "twenty eight",
    "twenty nine",
    "thirty",
};

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    int h, m;

    cin >> h;
    cin >> m;

    if (m == 0)
    {
        cout << numbers_to_words[h - 1] << " o' clock\n";
    }
    else if (m == 15)
    {
        cout << "quarter past " << numbers_to_words[h - 1] << '\n';
    }
    else if (m == 30)
    {
        cout << "half past " << numbers_to_words[h - 1] << '\n';
    }
    else if (m == 45)
    {
        cout << "quarter to " << numbers_to_words[h] << '\n';
    }
    else if (m < 30)
    {
        cout << numbers_to_words[m - 1] << (m == 1 ? " minute" : " minutes")
             << " past " << numbers_to_words[h - 1] << '\n';
    }
    else
    {
        cout << numbers_to_words[60 - m - 1] << (m == 59 ? " minute" : " minutes") << " to " << numbers_to_words[h] << '\n';
    }

    return 0;
}