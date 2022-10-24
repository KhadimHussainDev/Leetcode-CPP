/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode *sortedListToBST(ListNode *head)
    {
        vector<int> ans;
        ListNode *temp = head;
        while (temp != NULL)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        return sortedArrayToBST(ans);
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return recursive(0, nums.size() - 1, nums);
    }
    TreeNode *recursive(int left, int right, vector<int> &nums)
    {
        if (left > right)
        {
            return NULL;
        }
        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = recursive(left, mid - 1, nums);
        root->right = recursive(mid + 1, right, nums);
        return root;
    }
};