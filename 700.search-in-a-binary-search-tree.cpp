/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            return NULL;
        }
        return recursive(root, val); 
    }   
    TreeNode *recursive(TreeNode *root, int val)
    {
        TreeNode* temp;
        if (root == NULL)
        {
            return NULL;
        }
        else if (root->val == val)
        {
            return root;
        }
        else if (val < root->val)
        {
            temp=recursive(root->left, val);
        }
        else if (val > root -> val)
        {
            temp=recursive(root->right, val);
        }
        return temp;
    }
};
// @lc code=end
