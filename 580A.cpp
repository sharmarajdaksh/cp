#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, p = 0, max_subsegment = 0, current_subsegment = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a >= p) {
            current_subsegment += 1;
        } else {
            max_subsegment = max(max_subsegment, current_subsegment);
            current_subsegment = 1;
        }
        p = a;
    }
    max_subsegment = max(max_subsegment, current_subsegment);

    cout << max_subsegment << '\n';

    return 0;
}
