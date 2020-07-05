#include <bits/stdc++.h>
using namespace std;

bool plusMinus(char a)
{
    return a == '+' || a == '-';
}
bool multDiv(char a)
{
    return a == '*' || a == '/';
}

int isHigherPrecedence(char a, char b)
{
    if ((plusMinus(a) || plusMinus(b)) && (b == '^'))
        return -1;

    if (plusMinus(a) && multDiv(b))
        return -1;

    if ((a == b) || (plusMinus(a) && plusMinus(b)) || (multDiv(a) && multDiv(b)))
        return 0;

    return 1;
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
        string s;
        char x;
        stack<char> k;
        cin >> s;
        for (unsigned int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                cout << s[i];
                continue;
            }

            if (k.empty() || s[i] == '(')
            {
                k.push(s[i]);
                continue;
            }

            if (s[i] == ')')
            {
                while (k.top() != '(')
                {
                    x = k.top();
                    k.pop();
                    cout << x;
                }
                k.pop();
                continue;
            }

            if (isHigherPrecedence(s[i], k.top()) == 1)
            {
                k.push(s[i]);
                continue;
            }

            if (isHigherPrecedence(s[i], k.top()) == 0)
            {
                if (s[i] == '^')
                {
                    k.push(s[i]);
                }
                else
                {
                    x = k.top();
                    cout << x;
                    k.pop();
                    k.push(s[i]);
                }
                continue;
            }

            if (isHigherPrecedence(s[i], k.top()) == -1)
            {
                x = k.top();
                cout << x;
                k.pop();
                i--;
                continue;
            }
        }

        while (!k.empty())
        {
            x = k.top();
            cout << x;
            k.pop();
        }

        cout << '\n';
    }

    return 0;
}