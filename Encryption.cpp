#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    string s;
    int z, row, col, i, j, sl;
    float sq;

    getline(cin, s);

    // Remove spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    z = s.size();

    sq = sqrt(z);
    row = floor(sq);
    col = ceil(sq);

    if (row * col < z)
    {
        row++;
    }

    vector<vector<char>> m(row, vector<char>(col, ' '));

    sl = 0;
    for (i = 0; i < row && sl < z; i++)
    {
        for (j = 0; j < col && sl < z; j++, sl++)
        {
            m[i][j] = s[sl];
        }
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (m[j][i] == ' ')
                continue;
            cout << m[j][i];
        }
        cout << ' ';
    }

    return 0;
}