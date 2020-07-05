#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    char alphabets[] = {
        'a',
        'b',
        'c',
        'd',
        'e',
        'f',
        'g',
        'h',
        'i',
        'j',
        'k',
        'l',
        'm',
        'n',
        'o',
        'p',
        'q',
        'r',
        's',
        't',
        'u',
        'v',
        'w',
        'x',
        'y',
        'z'
    };

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {

        int a, b, n;
        cin >> n >> a >> b;

        string s = "";

        for (int i = 0; i < n; i++) {
            s += alphabets[i % b];
        }

        cout << s << '\n';
    }

    return 0;
}