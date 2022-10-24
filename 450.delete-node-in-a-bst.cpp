/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {

        if (!root)
        {
            return root;
        }

        if (root->val < key)
        {
            root->right = deleteNode(root->right, key);
        }
        else if (root->val > key)
        {
            root->left = deleteNode(root->left, key);
        }
        else
        {
            TreeNode *newRoot = NULL;
            if (root->left == root->right)
            {
            }
            else if (root->right == NULL)
            {
                newRoot = root->left;
            }
            else if (root->left == NULL)
            {
                newRoot = root->right;
            }
            else
            {
                TreeNode *previous = root;
                newRoot = root->right;
                while (newRoot->left)
                {
                    previous = newRoot;
                    newRoot = newRoot->left;
                }
                if (previous != root)
                {
                    previous->left = newRoot->right;
                    newRoot->right = root->right;
                }

                newRoot->left = root->left;
            }
            return newRoot;
        }
        return root;
    }
};

// @lc code=end
