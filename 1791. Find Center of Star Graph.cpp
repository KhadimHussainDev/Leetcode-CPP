class Solution {
public:
    int findCenter(vector<vector<int>>& edges){
        int size=edges.size()+1;
        vector<int>degrees(size+1);
        int star=0;int largest=0;
        for(auto x:edges){
            int a=++degrees[x[0]];
            int b=++degrees[x[1]];
            if(largest<a){
                largest=a;
                star=x[0];
                if(a==2)
                    return star;
            }
            if(largest<b){
                largest=b;
                star=x[1];
                if(a==2)
                    return star;
            }
        }
        return star;
    }
};