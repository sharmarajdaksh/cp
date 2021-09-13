#include<bits/stdc++.h>
using namespace std;

const char x = 'X';

class Solution {
public:
    int countBattleships(vector<vector<char>>& b) {
        int m = b.size();
        if (m == 0) return 0;
        int n = b[0].size();
        if (n == 0) return 0;

        int count = 0;

        for (int i = 0; i < m; i++) {
        	for (int j = 0; j < n; j++) {
        		if (b[i][j] != x) continue;

        		if (i == 0 && j == 0) {
        			count++;
        			continue;
        		}
        		if (j == 0 && b[i - 1][j] != x) {
        			count++;
        			continue;
        		}
        		if (i == 0 && b[i][j - 1] != x) {
        			count++;
        			continue;
        		}
                
                if (i != 0 && j != 0 && b[i - 1][j] != x && b[i][j - 1] != x) {
                    count++;
                    continue;
                }
        	}
        }

        return count;
    }
};
