/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        TreeNode* curr = root;
        if (root == NULL)
        {
            return false;
        }
        vector<int> v;
        stack<TreeNode *> s;
        while (!s.empty() || curr != NULL)
        {
            if (curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            else
            {
                curr = s.top();
                s.pop();
                v.push_back(curr->val);
                curr = curr->right;
            }
        }
        int size=v.size();
        
        for (int i = 0; i < size - 1; i++)
        {
            if (v[i] >= v[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
