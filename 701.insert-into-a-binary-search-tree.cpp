/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        TreeNode *node = root;
        if (node == NULL)
        {
            root = new TreeNode(val);
            return root;
        }
        recursive(root, val);

        return root;
    }
    void recursive(TreeNode *root, int val)
    {

        if (val < root->val)
        {
            if (root->left != NULL)
            {
               recursive(root->left, val);
            }
            else
            {
                root->left = new TreeNode(val);
                return;
            }
        }
        else
        {
            if (root->right != NULL)
            {
                recursive(root->right, val);
            }
            else
            {
                root->right = new TreeNode(val);
                return ;
            }
        }
        
    }
};
// @lc code=end
