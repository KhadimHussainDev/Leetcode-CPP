class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0, size = nums.size();
        int count = 0;
        for (i = 0; i < size; i++)
        {
            if (nums[i] != val)
            {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};