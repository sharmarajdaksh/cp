#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int n) {
    string s = to_string(n);
    for (unsigned int i = 0; i < s.size(); i++) {
        if (s[i] != '4' && s[i] != '7')
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool f;

    cin >> n;
    
    if (is_lucky(n)) {
        cout << "YES\n";
    } else {
        f = true;
        for (int i = 1; i < n; i++) {
            if (is_lucky(i) && n % i == 0) {
                f = false;
            }
        }
        cout << (f ? "NO\n" : "YES\n");
    }

    return 0;
}
