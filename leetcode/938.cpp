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

    int getTreeRangeSum(TreeNode *root, int low, int high)
    {
        int sum = 0;
        if (root->left != nullptr && root->val > low)
        {
            sum += getTreeRangeSum(root->left, low, high);
        }

        if (root->right != nullptr && root->val < high)
        {
            sum += getTreeRangeSum(root->right, low, high);
        }

        if (root->val >= low && root->val <= high)
        {
            sum += root->val;
            cout << root->val;
        }

        return sum;
    }

public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        return getTreeRangeSum(root, low, high);
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}