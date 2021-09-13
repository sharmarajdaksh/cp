#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
 		long n = c.size();

 		if (n == 1) {
 			return c[0][1];
 		}

 		long totalWait = c[0][1]; // Total waiting time
 		long currentEnd = c[0][0] + c[0][1]; // Time of order end

 		for (int i = 1; i < n; i++) {
 			if (currentEnd > c[i][0]) {
 				totalWait += (currentEnd - c[i][0]);
 			}
 			if (currentEnd < c[i][0]) {
 				currentEnd = c[i][0] + c[i][1];
 			} else {
	 			currentEnd += c[i][1];	
 			}
 			totalWait += c[i][1];
 			
 		}

 		return (double) totalWait / (double) n;
    }
};

int main() {
	vector<vector<int>> v = {
		{2,3}, {6,3}, {7,5}, {11,3}, {15,2}, {18,1}
	};
	cout << (new Solution())->averageWaitingTime(v) << endl;

	v = {
		{5,2}, {5,4}, {10,3}, {20,1}
	};
	cout << (new Solution())->averageWaitingTime(v) << endl;

}