class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>map;
        map[1]=1;
        map[2]=2;
        for(int i=3;i<=n;i++){
            map[i]=map[i-1]+map[i-2];
        }
        return map[n];
    }
};