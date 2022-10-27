class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_map<int, int> m;
        vector<int> vec;
        int num = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i]) == m.end())
            {
                m[nums[i]] = nums[i];
            }
            else
            {
                vec.push_back(nums[i]);
                num = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(i + 1) == m.end())
            {
                vec.push_back(i + 1);
                break;
            }
        }
        return vec;
    }
};