#include<bits/stdc++.h>
using namespace std;

void solve(int t) {
    int n;
    cin >> n;
    
    vector<int> l(n), cp(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    cp = l;

    sort(cp.begin(), cp.end());
    
    int ptr = 0;
    int ptmp = ptr;
    int last = 0;
    int cost = 0;

    while (ptr < n - 1) {
        ptmp = ptr;
        while (cp[ptr] != l[ptmp]) {
            ptmp++;
        }
        
        cost = cost + ptmp - last + 1;
        reverse(l.begin() + last, l.begin() + ptmp + 1);

        last = ptr + 1;
        ptr++;
    }
    
    cout << "Case #" << t << ": " << cost << endl;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        solve(i + 1);
    }
    
    return 0;
}
