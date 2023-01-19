class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1 ; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return vec;
        
    }
};
//better solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                ans.push_back(map[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};