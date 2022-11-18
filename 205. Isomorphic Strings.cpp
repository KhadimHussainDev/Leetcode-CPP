class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> map;
        unordered_map<char, char> map2;

        for (int i = 0; i < s.size(); i++)
        {
            if (map.find(s[i]) == map.end())
            {
                map[s[i]] = t[i];
            }
            else
            {
                if (map[s[i]] != t[i])
                {
                    return false;
                }
            }
            if (map2.find(t[i]) == map2.end())
            {
                map2[t[i]] = s[i];
            }
            else
            {
                if (map2[t[i]] != s[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};