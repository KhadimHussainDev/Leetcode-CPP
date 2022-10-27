class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> m;
        for (int i = 0; magazine[i] != '\0'; i++)
        {
            if (m.find(magazine[i]) == m.end())
            {
                m[magazine[i]] = 1;
            }
            else
            {
                m.find(magazine[i])->second += 1;
            }
        }
        for (int i = 0; ransomNote[i] != '\0'; i++)
        {
            if (m.find(ransomNote[i]) == m.end())
            {
                return false;
            }
            else
            {
                m.find(ransomNote[i])->second -= 1;
                if (m.find(ransomNote[i])->second < 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};