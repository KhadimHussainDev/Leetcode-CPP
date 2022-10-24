/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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

    vector<int> inOrder(TreeNode* root){
        
        vector<int> v;
        TreeNode *curr = root;
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
        return v;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>vec=inOrder(root);
        int size=vec.size();

        int diff=vec[1]-vec[0];
        for(int i=1;i<size-1;i++){
            int d=vec[i+1]-vec[i];
            if(d<diff){
                diff=d;
            }
        }
        return diff;
    }
};
// @lc code=end

