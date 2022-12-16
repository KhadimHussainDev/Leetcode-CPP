
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long >s;
        for(auto token:tokens){
            char check=token[0];
            if(token.size()>1){
                check=token[1];
            }
            if(isdigit(check)){
                s.push(stoi(token));
            }
            else{
                int first=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                if(token=="+"){
                    s.push(first+second);
                }
                else if(token=="-"){
                    s.push(second-first);
                }
                else if (token=="*"){
                    s.push((long long)second*first);
                }
                else if(token=="/"){
                    s.push((int)(second/first));
                }
            }
            
        }
        return s.top();
    }
};