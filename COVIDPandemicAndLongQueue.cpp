#include <bits/stdc++.h>
using namespace std;

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
        int n;
        bool found_a_person = false, are_distanced = true;
        int z = 0, p;
        vector<int> A;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            A.push_back(p);
        }

        for (int i = 0; i < n; i++)
        {
            if (A[i] == 0)
                z++;
            else if (A[i] == 1)
            {
                if (!found_a_person)
                {
                    z = 0;
                    found_a_person = true;
                    continue;
                }
                else
                {
                    z++;
                    if (z < 6)
                    {
                        are_distanced = false;
                        break;
                    }
                    else
                    {
                        z = 0;
                    }
                }
            }
        }

        cout << (are_distanced ? "YES" : "NO") << '\n';
    }
    return 0;
}
