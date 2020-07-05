#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string s;
    map<string, int> in;
    vector<string> out;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (in.find(s) == in.end()) {
            in[s] = 1;
            out.emplace_back("OK");
        } else {
            int c = in[s];
            in[s]++;
            out.emplace_back(s.append(to_string(c)));
        }
    }

    for (int i = 0; i < n; i++) {
        cout << out[i] << '\n';
    }

    return 0;
}
