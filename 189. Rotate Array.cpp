class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        int size=nums.size();
        k=k%size;
        for(int i=k;i>0;i--){
            v.push_back(nums[size-i]);
        }
        for(int i=0;i<size-k;i++){
            v.push_back(nums[i]);
        }
        nums=v;
    }
};