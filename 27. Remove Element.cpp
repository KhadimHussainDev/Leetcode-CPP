class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        
        for( i=0;i<=j;i++){
            if(nums[i]==val){
                while(nums[j]==val&&j>i){
                    j--;
                }
                if(j<=i){
                    break;
                }
                swap(nums[i],nums[j]);
                j--;
            }
        }
        return i;
    }
};