class Solution {
public:
    vector<int> constructRectangle(int area) {
        if (area==1){
            return {1,1};
        }
        vector<vector<int>>vec;
        for(int i=1;i<=area/2;i++){
            if(area%i==0){
                vec.push_back({area/i,i});
            }
        }
        int small=INT_MAX,index=0;
        for(int i=0;i<vec.size();i++){
            int diff=abs(vec[i][0]-vec[i][1]);
            cout<<diff<<" ";
            if(diff<small){
                small=diff;
                index=i;
            }
        }
        return vec[index];
    }
};