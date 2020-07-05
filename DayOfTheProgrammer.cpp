#include <bits/stdc++.h>
using namespace std;

const int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    int y;
    cin >> y;

    if (y == 1918)
    {
        cout << "26.09.1918\n";
    }
    else if (((y <= 1917) && (y % 4 == 0)) || ((y > 1918) && ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))))
    {
        cout << "12.09." << y << '\n';
    }
    else
    {
        cout << "13.09." << y << '\n';
    }

    return 0;
}