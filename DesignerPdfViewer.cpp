#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Faster IO */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Faster IO */
    unsigned int t;
    map<char, unsigned int> h;
    vector<unsigned int> v;
    string s;

    for (char c : {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'})
    {
        cin >> t;
        h.insert(pair<char, int>(c, t));
    }

    cin >> s;
    for (char c : s)
    {
        v.push_back(h[c]);
    }

    cout << (s.size() * (*max_element(v.begin(), v.end()))) << '\n';

    return 0;
}