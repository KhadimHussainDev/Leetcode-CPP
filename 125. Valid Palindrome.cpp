class Solution
{
public:
    bool isPalindrome(string s)
    {
        string newStr = "";
        int count = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            {
                newStr += s[i];
                count++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
                newStr += s[i];
                count++;
            }
        }
        int i = 0, j = count - 1;
        while (i < j)
        {
            if (newStr[i] != newStr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};