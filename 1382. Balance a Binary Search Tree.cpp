class Solution
{
public:
    vector<int> v;
    void inOrder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        inOrder(root);
        return sortedArrayToBST(v);
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