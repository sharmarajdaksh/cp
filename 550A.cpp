#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, x;
    cin >> s;
    int z = s.size();
    vector<int> ab, ba;

    for (int i = 0; i < z - 1; i++) {
        x = s.substr(i, 2);
        if (x == "AB") {
            ab.emplace_back(i);
        } else if (x == "BA") {
            ba.emplace_back(i);
        }
    }

    bool f = false;
    for (unsigned int i = 0; i < ab.size(); i++) {
        for (unsigned int j = 0; j < ba.size(); j++) {
            if (abs(ab[i] - ba[j]) != 1) {
                f = true;
                break;
            }
        }
        if (f) break;
    }

    cout << (f ? "YES" : "NO");
    

    return 0;
}
