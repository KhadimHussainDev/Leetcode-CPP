/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
        vector<int>v;
        stack<TreeNode*>s;
        TreeNode* curr=root;
        while(!s.empty()||curr!=NULL){
            if(curr!=NULL){
                s.push(curr);
                curr=curr->left;
            }else{
                curr=s.top();
                s.pop();
                v.push_back(curr->val);
                curr=curr->right;
            }
        }
        return v;

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v=inOrder(root);
        int a=k;
        if(k<0){
            a=0;
        }
        for(int i=0;i<v.size()-1&&v[i]<a;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==k){
                    return true;
                }
            }
        }
        
        return false;
    }
};
// @lc code=end

