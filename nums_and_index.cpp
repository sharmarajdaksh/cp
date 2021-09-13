// Given two integer arrays of same size, “arr[]” and “index[]”, reorder elements in “arr[]” according to given index array. It is not allowed to given array arr’s length.

// Example: 

// Input:  arr[]   = [10, 11, 12];
//         index[] = [1, 0, 2];
// Output: arr[]   = [11, 10, 12]
//         index[] = [0,  1,  2] 

// Input:  arr[]   = [50, 40, 70, 60, 90]
//         index[] = [3,  0,  4,  1,  2]
// Output: arr[]   = [40, 60, 90, 50, 70]
//         index[] = [0,  1,  2,  3,   4]
// Expected time complexity O(n) and auxiliary space O(1)

#include<bits/stdc++.h>
using namespace std;

vector<int> nums_and_indexes(vector<int>& nums, vector<int>& indexes) {
        for (int i = 0; i < nums.size(); i++) {
                while (indexes[i] != i) {
                        swap(nums[i], nums[indexes[i]]);
                        swap(indexes[i], indexes[indexes[i]]);
                }
        }
        return nums;
}

int main() {

        vector<int> nums = {10, 11, 12};
        vector<int> indexes = {1, 0, 2};
        vector<int> res = nums_and_indexes(nums, indexes);
        for (auto r: res) {
                cout << r << " ";
        }
        cout << endl;

        nums = {50, 40, 70, 60, 90};
        indexes = {3, 0, 4, 1, 2};
        res = nums_and_indexes(nums, indexes);
        for (auto r: res) {
                cout << r << " ";
        }
        cout << endl;

        nums = {24, 56, 74, -23, 87, 91};
        indexes = {1, 2, 3, 0, 4, 5};
        res = nums_and_indexes(nums, indexes);
        for (auto r: res) {
                cout << r << " ";
        }
        cout << endl;


        return 0;
}