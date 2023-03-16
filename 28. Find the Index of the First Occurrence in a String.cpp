class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int index = -1;
        for (int i = 0; haystack[i] != '\0'; i++)
        {
            if (haystack[i] == needle[0])
            {
                if (check(haystack, needle, i))
                {
                    return i;
                }
            }
        }
        return index;
    }
    bool check(string haystack, string needle, int i)
    {
        for (int j = 0; needle[j] != '\0'; j++, i++)
        {
            if (haystack[i] == '\0')
            {
                return false;
            }
            if (needle[j] != haystack[i])
            {
                return false;
            }
        }
        return true;
    }
};