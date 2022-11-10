class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid])
            {
                start=mid+1;
            }
            else
            {
                start=mid;
                return start;
            }
        }
        return -1;
    }
};