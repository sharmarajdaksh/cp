#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        int val = head->val;
        while (head->next != nullptr)
        {
            val <<= 1;
            head = head->next;
            val += head->val;
        }

        return val;
    }
};

int main()
{
    Solution s = Solution();
}
