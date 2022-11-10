class Solution {
public:
    double average(vector<int>& salary) {
        bubbleSort(salary);
        return accumulate(salary.begin()+1,salary.end()-1,0.0)/(salary.size()-2);
    }
    void bubbleSort(vector<int>&salary){
        int count=salary.size();
        bool check=false;
        while(!check&&count!=1){
            check=true;
            for(int i=0;i<count-1;i++){
                if(salary[i]<salary[i+1]){
                    swap(salary[i],salary[i+1]);
                    check=false;
                }
            }
            count--;
        }
    }
};