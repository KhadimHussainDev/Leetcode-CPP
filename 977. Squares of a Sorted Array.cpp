class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size;i++){
            nums[i]=nums[i]*nums[i];
        }
        radixSort(nums);
        return nums;
    }
    void radixSort(vector<int>&nums){
        int max=*max_element(nums.begin(),nums.end());
        int place=1;
        while(max>0){
            countingSort(nums,place);
            max=max/10;
            place*=10;
        }
    }
    void countingSort(vector<int>&nums,int place){
        vector<int>count(10,0);
        vector<int>fin(nums.size());
        for(int i=0;i<nums.size();i++){
            count[(nums[i]/place)%10]++;
        }
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            fin[--count[(nums[i]/place)%10]]=nums[i];
        }
        nums=fin;
    }
};