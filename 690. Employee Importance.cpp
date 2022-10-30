/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        int value = 0;
        unordered_map<int, Employee *> m;
        //push all elements of vector into unordered_map to access easily later on
        for (int i = 0; i < employees.size(); i++)
        {
            m.emplace(employees[i]->id, employees[i]);
        }
        stack<int> s;
        s.push(id);
        while (!s.empty())
        {
            int eId = s.top();
            s.pop();
            auto e = m[eId];
            value += e->importance;
            //push all subordinates to the stack
            for (int x = 0; x < e->subordinates.size(); x++)
            {
                s.push(e->subordinates[x]);
            }
        }
        return value;
    }
};