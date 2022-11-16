class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int start = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[start] = nums[i];
                start++;
            }
        }
        while (start < nums.size())
        {
            nums[start] = 0;
            start++;
        }
    }
};