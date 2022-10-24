/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        v=inOrder(root,v);
        return v[k-1];
    }
     vector<int> inOrder(TreeNode* root,vector<int>v){
       
        if(root==NULL){
            return v;
        }
        v=inOrder(root->left,v);
        v.push_back(root->val);
        v=inOrder(root->right,v);
        return v;

    }
};
// @lc code=end

