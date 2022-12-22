class Solution
{
public:
    bool validPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                if (isPalindrome(s, i, j - 1) || isPalindrome(s, i + 1, j))
                {
                    return true;
                }
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};