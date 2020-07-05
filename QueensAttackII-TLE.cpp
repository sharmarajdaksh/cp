#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    unsigned int n, k, rq, cq, ri, ci, i, s, c, j;
    vector<pair<unsigned int, unsigned int>> b;
    bool p, f, d;

    cin >> n >> k;
    cin >> rq >> cq;

    b.clear();
    for (i = 0; i < k; i++)
    {
        cin >> ri >> ci;
        b.push_back(pair<unsigned int, unsigned int>(ri, ci));
    }

    s = 0;
    c = 0;
    p = false;

    // VERTICAL
    for (i = 1; i < n + 1; i++)
    {
        if (i == rq)
        {
            p = true;
            continue;
        }

        f = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(i, cq)) != b.end();

        if (f && !p)
        {
            c = 0;
        }
        else if (f && p)
        {

            break;
        }
        else
        {
            c++;
        }
    }
    s += c;

    c = 0;
    p = false;

    // HORIZONTAL
    for (i = 1; i < n + 1; i++)
    {
        if (i == cq)
        {
            p = true;
            continue;
        }

        auto z = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(rq, i));
        f = z != b.end();

        if (f)
        {
            b.erase(z);
        }

        if (f && !p)
        {
            c = 0;
        }
        else if (f && p)
        {

            break;
        }
        else
        {
            c++;
        }
    }
    s += c;

    c = 0;

    // DIAGONAL FORWARD
    for (i = rq + 1, j = cq + 1; i <= n && j <= n;)
    {
        auto z = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(i, j));
        f = z != b.end();
        if (f)
        {
            b.erase(z);
        }
        if (f)
        {
            break;
        }
        c++;
        i++;
        j++;
    }
    s += c;

    c = 0;

    // DIAGONAL BACKWARD
    for (i = rq - 1, j = cq - 1; i >= 1 && j >= 1;)
    {
        auto z = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(i, j));
        f = z != b.end();
        if (f)
        {
            b.erase(z);
        }

        if (f)
        {
            break;
        }
        c++;
        i--;
        j--;
    }
    s += c;

    c = 0;

    // CROSSDIAGONAL FORWARD
    for (i = rq + 1, j = cq - 1; i <= n && j >= 1;)
    {
        auto z = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(i, j));
        f = z != b.end();
        if (f)
        {
            b.erase(z);
        }
        if (f)
        {
            break;
        }
        c++;
        i++;
        j--;
    }
    s += c;

    c = 0;

    // CROSSDIAGONAL BACKWARD
    for (i = rq - 1, j = cq + 1; i >= 1 && j <= n;)
    {
        auto z = find(b.begin(), b.end(), pair<unsigned int, unsigned int>(i, j));
        f = z != b.end();
        if (f)
        {
            b.erase(z);
        }
        if (f)
        {
            break;
        }
        c++;
        i--;
        j++;
    }
    s += c;

    cout << s << '\n';

    return 0;
}