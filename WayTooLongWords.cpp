#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    for (int t = 0; t < test_cases; t++) {

        string long_string;
        cin >> long_string;

        int long_string_size = long_string.size();

        if (long_string_size <= 10) {
            cout << long_string << '\n';
        } else {
            cout << long_string[0] << long_string_size - 2 <<
                 long_string[long_string_size - 1] << '\n';
        }
    }


    return 0;
}
