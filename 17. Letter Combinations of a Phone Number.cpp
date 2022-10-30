class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        unordered_map<char, string> m;
        m.emplace('1', "");
        m.emplace('2', "abc");
        m.emplace('3', "def");
        m.emplace('4', "ghi");
        m.emplace('5', "jkl");
        m.emplace('6', "mno");
        m.emplace('7', "pqrs");
        m.emplace('8', "tuv");
        m.emplace('9', "wxyz");
        vector<string> vec;
        string s = "";
        if (digits == "")
        {
            return vec;
        }
        string str1 = m[digits[0]];
        for (int i = 0; str1[i] != '\0'; i++)
        {
            vec.push_back(getString(str1[i]));
        }
        char dig = digits[0];
        int i = 1;
        while (digits[i] != '\0')
        {
            dig = digits[i];
            string str2 = m[dig];
            vector<string> v;
            for (int i = 0; i < vec.size(); i++)
            {
                for (int j = 0; str2[j] != '\0'; j++)
                {
                    s = vec[i];
                    s += str2[j];
                    v.push_back(s);
                }
            }
            vec = v;
            v.clear();
            i++;
        }
        return vec;
    }
    string getString(char x)
    {
        string s(1, x);
        return s;
    }
};