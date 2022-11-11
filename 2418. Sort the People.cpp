class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int n=heights.size();
        for(int i=1;i<n;i++){
            bool flag=false;
            int curr = heights[i];
            string s=names[i];
            for(int j=i-1;j>=0;j--){
                if(curr>heights[j]){
                    heights[j+1]=heights[j];
                    names[j+1]=names[j];
                }
                else{
                    heights[j+1]=curr;
                    names[j+1]=s;
                    flag=true;
                    break;
                }
            }
                if(!flag){
                    heights[0]=curr;
                    names[0]=s;
                }
        }
        return names;
    }
};