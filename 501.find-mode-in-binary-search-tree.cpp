/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    vector<int> findMode(TreeNode *root)
    {

        TreeNode *curr = root;
        // if (root == NULL)
        // {
        //     return NULL;
        // }
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
        int size = v.size();

        int count = 0, count1 = 0;
        vector<int> v1;
        bool flag = true;
        if (size <= 1)
        {
            return v;
        }
        for (int i = 0; i < size - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                count++;
                if (count > count1)
                {
                    v1.clear();
                    v1.push_back(v[i]);
                    count1 = count;
                }
                else
                {
                    if (count == count1)
                    {
                        v1.push_back(v[i]);
                    }
                }
                flag = false;
                
            }
            else{
                count=0;
            }
        }
        if (flag)
        {
            return v;
        }

        return v1;
    }
};
// @lc code=end
