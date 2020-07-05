#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    bool ez = false;
    unsigned int T, N, i, j;
    long s = -1, c = -1;
    unsigned long long P, k;
    vector<unsigned long long> D;

    cin >> T;

    for (unsigned int t = 0; t < T; t++)
    {
        ez = false;
        D.clear();

        cin >> N >> P;
        for (i = 0; i < N; i++)
        {
            cin >> k;
            if (k > P)
            {
                cout << "YES ";
                for (j = 0; j < N; j++)
                {
                    if (j == i)
                    {
                        cout << 1 << ' ';
                    }
                    else
                    {
                        cout << 0 << ' ';
                    }
                }
                cout << '\n';
                ez = true;
                break;
            }
            D.push_back(k);
        }

        if (ez)
            continue;

        for (i = 0; i < N; i++)
        {
            if (P % D[i] > 0)
            {
                s = i;
                c = (P / D[i]) + 1;
            }
        }

        if (s == -1)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES ";
        for (i = 0; i < N; i++)
        {
            if (i == s)
            {
                cout << c;
            }
            else
            {
                cout << 0;
            }
            if (i != N - 1)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}