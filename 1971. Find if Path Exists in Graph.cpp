class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>map;
        for(auto x:edges){
            map[x[0]].push_back(x[1]);
            map[x[1]].push_back(x[0]);
        }
        queue<int>q;
        unordered_map<int,bool>visited;
        visited[source]=true;
        q.push(source);
        while(!q.empty()){
            int temp=q.front();
            if(temp==destination){
                return true;
            }
            q.pop();
            vector<int> vec=map[temp];
            for(auto x:vec){
                if(visited.find(x)==visited.end()){
                    q.push(x);
                    visited[x]=true;
                }
            } 
        }
        return false;
    }
};