#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string w;
    cin >> t;
    while (t)
    {
        cin >> w;
        next_permutation(w.begin(), w.end()) ? cout << w << '\n' : cout << "no answer\n";
        t--;
    }
    return 0;
}