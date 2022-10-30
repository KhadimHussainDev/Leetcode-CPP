class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].push_back(strs[i]);
        }

        for (auto x : m)
        {
            res.push_back(x.second);
        }

        return res;
    }
};