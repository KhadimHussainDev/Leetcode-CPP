class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>answer(digits.size());
        int temp=0;
        answer[digits.size()-1]= (digits[digits.size()-1]+1)%10;
        temp= (digits[digits.size()-1]+1)/10;
        for(int i=digits.size()-2;i>=0;i--){
            answer[i]=(temp+digits[i])%10;
            temp=(temp+digits[i])/10;
        }
        if(temp==1){
            answer.insert(answer.begin(),1);
        }
        return answer;
    }
};