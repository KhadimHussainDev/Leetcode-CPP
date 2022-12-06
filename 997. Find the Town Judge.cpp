class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0&&n==1){
            return n;
        }
        unordered_map<int,int>map;
        for(auto x:trust){    
            map[x[1]]++;
        }
        int largest=0,judge=-1;
        for(auto a:map){
            if(a.second>largest){
                largest=a.second;
                judge=a.first;
            }
        }
        for(auto a:trust){
            if(judge==a[0])
                return -1;
        }
        int b=map[judge]++;
        for(auto a:map){
            if(b==a.second)
                return -1;
        }
        if(b>=n-1)
        return judge;
        return -1;
    }
};