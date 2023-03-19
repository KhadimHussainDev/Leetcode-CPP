class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        stack<int> vec;
        int y = x;
        while (y > 0)
        {
            int i = y % 10;
            vec.push(i);
            y = y / 10;
        }
        while (!vec.empty())
        {
            int j = vec.top();
            vec.pop();
            if (x % 10 != j)
            {
                return false;
                break;
            }
            x = x / 10;
        }
        return true;
    }
};