#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    TreeNode *recurse(TreeNode *t1, TreeNode *t2, TreeNode *ans)
    {
        if (ans == nullptr)
        {
            ans = new TreeNode();
        }

        if (t2 == nullptr)
        {
            return t1;
        }
        else if (t1 == nullptr)
        {
            return t2;
        }
        else
        {
            ans->val = t1->val + t2->val;
            ans->right = recurse(t1->right, t2->right, ans->right);
            ans->left = recurse(t1->left, t2->left, ans->left);
        }

        return ans;
    }

public:
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2)
    {
        return recurse(t1, t2, nullptr);
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}