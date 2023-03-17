class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// better solution
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int alphabet[26] = {};
        for (int i = 0; s[i] != '\0'; i++)
        {
            alphabet[s[i] - 'a']++;
        }
        for (int i = 0; t[i] != '\0'; i++)
        {
            alphabet[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (alphabet[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};