#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int minKBitFlips(vector<int>& nums, int k) {
// 		int cur = 0; // Flips in current sliding window
// 		int res = 0;
// 		int n = nums.size();

// 		for (int i = 0; i < n; ++i) {

// 			if (i >= k && nums[i - k] > 1) {
// 				cur--;

// 				// Reset updates to list
// 				nums[i - k] -= 2;
// 			}

// 			if (cur % 2 == nums[i]) {
// 				if (i + k > n) return -1;
// 				nums[i] += 2;
// 				cur++;
// 				res++;
// 			}
// 		}

// 		return res;
//     }
// };


class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
		int n = nums.size();
		int a = 0;
		vector<int> hasEverFlipped(n, 0);
		int validFlipCountForCurrentIndex = 0;

		for (int i = 0; i < n; i++) {
			if (i >= k) {
				if (hasEverFlipped[i - k]) {
					validFlipCountForCurrentIndex--;
				}
			}

			if (validFlipCountForCurrentIndex % 2 == nums[i]) {
				if (i + k > n) return -1;
				validFlipCountForCurrentIndex++;
				hasEverFlipped[i] = 1;
				ans++;
			}
		}
    }
};


int main() {


}