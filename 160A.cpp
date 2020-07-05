#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    vector<int> a;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.emplace_back(x);
    }

    int total_sum = accumulate(a.begin(), a.end(), 0);
    int current_sum = 0;
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0 ; i--) {
        current_sum += a[i];
        total_sum -= a[i];
        if (total_sum < current_sum) {
            cout << n - i << '\n';
            break;
        }
    } 

    return 0;
}
