#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    for (int t = 0; t < T; t++) {
        
        int n;
        long trace_sum = 0;
        int duplicate_rows = 0;
        int duplicate_cols = 0;

        cin >> n;
        int m[n][n] = {0};
        
        
        for (int i = 0; i < n; i++) {
            vector<int> current_row;
            bool found_duplicate_so_ignore_now = false;
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
                if (i == j) {
                    trace_sum += m[i][j];
                }
                if (!current_row.empty() && !found_duplicate_so_ignore_now && find(current_row.begin(), current_row.end(), m[i][j]) != current_row.end()) {
                    duplicate_rows++;
                    found_duplicate_so_ignore_now = true;
                }
                current_row.emplace_back(m[i][j]);
            }
        }
        
        for (int i = 0; i < n; i++) {
            vector<int> current_col;
            bool found_duplicate_so_ignore_now = false;
            for (int j = 0; j < n; j++) {
                if (!current_col.empty() && !found_duplicate_so_ignore_now && find(current_col.begin(), current_col.end(), m[j][i]) != current_col.end()) {
                    duplicate_cols++;
                    found_duplicate_so_ignore_now = true;
                }
                current_col.emplace_back(m[j][i]);
            }
            
        }
        
        cout << "Case #" << t + 1 << ' ' << trace_sum << ' ' << duplicate_rows << ' ' << duplicate_cols << '\n';
        
        
    }
    
    return 0;
}
