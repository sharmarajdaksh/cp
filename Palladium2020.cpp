#include <bits/stdc++.h>
using namespace std;

bool comp(const int &lhs, const int &rhs)
{
    return lhs != rhs ? lhs < rhs : &lhs < &rhs;
}
int solution(vector<int> &H)
{
    // write your code in C++14 (g++ 6.2.0)
    vector<int>::iterator max_overall;
    vector<int>::iterator max_overall_rev;
    vector<int>::iterator max_before;
    vector<int>::iterator max_after;
    int max_covers_all, h_size;

    h_size = H.size();
    if (h_size == 1)
    {
        return H[0];
    }

    max_overall = max_element(H.begin(), H.end());
    max_covers_all = *max_overall * h_size;
    max_overall_rev = max_element(H.begin(), H.end(), comp);

    max_before = max_element(H.begin(), max_overall);
    if (max_overall_rev != H.end() - 1)
    {
        max_after = max_element(max_overall_rev + 1, H.end());
    }
    else
    {
        max_after = max_overall_rev;
    }

    return min(
        (int)max_covers_all,
        (int)min(
            (int)(*max_before * (max_overall - H.begin()) + *max_overall * (H.end() - max_overall)),
            (int)(*max_overall * (max_overall_rev - H.begin() + 1) + (max_after == max_overall_rev ? 0 : *max_after * (H.end() - max_overall_rev - 1)))));
}

int main()
{

    vector<int> a = {3, 1, 4};          // 10
    vector<int> b = {5, 3, 2, 4};       // 17
    vector<int> c = {5, 3, 5, 2, 1};    // 19
    vector<int> d = {7, 7, 3, 7, 7};    // 35
    vector<int> e = {1, 1, 7, 6, 6, 6}; // 30

    cout << solution(a) << endl;
    cout << solution(b) << endl;
    cout << solution(c) << endl;
    cout << solution(d) << endl;
    cout << solution(e) << endl;

    return 0;
}