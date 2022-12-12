class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int>s;
        unordered_map<int ,bool>hasKey;
        int size=rooms.size()-1;
        int count=0;
        hasKey[0]=true;
        for(auto x:rooms[0]){
            s.push(x);
            hasKey[x]=true;
            count++;
        }
        while(!s.empty()){
            int temp =s.top();
            s.pop();
            for(auto x : rooms[temp]){
                if(hasKey[x]!=true){
                    s.push(x);
                    hasKey[x]=true;
                    count++;
                }
            }
        }
        if(count>=size)
            return true;
        return false;
    }
};