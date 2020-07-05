#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long UL;
typedef unsigned long long UI;

class Library
{
public:
    UL N, T, M, c, ID;
    vector<UL> I;

    Library();

    Library(UL n, UL t, UL m, vector<UL> i, UL id)
    {
        N = n;
        T = t;
        M = m;
        c = N / M;
        I = i;
        ID = id;
    }
};

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */

    UL B, L, D, i, j, LN, LT, LM, lc, dat;
    vector<UI> S;
    vector<UL> v;
    vector<Library> LV, VL;
    UI t;

    cin >> B >> L >> D;

    for (i = 0; i < B; ++i)
    {
        cin >> t;
        S.push_back(t);
    }

    for (i = 0; i < L; ++i)
    {
        cin >> LN >> LT >> LM;
        v.clear();
        for (j = 0; j < LN; ++j)
        {
            cin >> t;
            v.push_back(t);
        }

        sort(v.begin(), v.end(), [S](UL a, UL b) { return S[a] > S[b]; });
        unique(v.begin(), v.end());

        Library l(LN, LT, LM, v, i);

        LV.push_back(l);
    }

    sort(LV.begin(), LV.end(), [](Library a, Library b) {
        if (a.T + ceil(a.N / a.M) > b.T + ceil(b.N / b.M))
        {
            return true;
        }
        else if (a.T + ceil(a.N / a.M) > b.T + ceil(b.N / b.M))
        {
            return false;
        }
        else
        {
            return a.T > b.T;
        }
    });

    i = 0;
    j = 0;
    lc = 0;
    while (i < D && j < L)
    {
        if (i + LV[j].T <= D)
        {
            i += LV[j].T;
            lc++;
        }
        j++;
    }

    cout << lc << '\n';

    dat = D;
    for (i = 0; i < lc; ++i)
    {
        if (LV[i].T >= dat)
        {
            i++;
            continue;
        }
        cout << LV[i].ID << ' ' << (dat - LV[i].T) * LV[i].M << '\n';
        for (j = 0; j < ((dat - LV[i].T) * LV[i].M) && j < LV[i].I.size(); ++j)
        {
            cout << LV[i].I[j] << ' ';
        }
        dat -= LV[i].T;
        cout << '\n';
    }

    return 0;
}