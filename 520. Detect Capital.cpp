class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int count = 0;
        bool flag = false;
        if (word[0] >= 'A' && word[0] <= 'Z')
        {
            flag = true;
        }
        for (int i = 1; i < word.length(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                count++;
                if (!flag)
                    return false;
            }
            else if (flag == true)
            {
                if (count > 0)
                    return false;
                else
                {
                    flag = false;
                }
            }
        }
        return true;
    }
};