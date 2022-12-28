class Solution
{
public:
    int myAtoi(string s)
    {
        long long int res = 0;
        bool flag = false, symbol = false, start = false;
        for (auto x : s)
        {
            if (x == ' ' && !start)
            {
            }
            else if (x >= '0' && x <= '9')
            {
                start = true;
                int temp = x - '0';
                res = res * 10 + temp;
                if (res > INT_MAX)
                {
                    if (flag)
                    {
                        return INT_MIN;
                    }
                    return INT_MAX;
                }
            }
            else if (start)
            {
                break;
            }
            else if (x == '-')
            {
                start = true;
                if (symbol == false)
                {
                    flag = true;
                    symbol = true;
                    continue;
                }
                break;
            }
            else if (x == '+')
            {
                start = true;
                if (symbol == false)
                {
                    flag = false;
                    symbol = true;
                    continue;
                }
                break;
            }
            else
            {
                break;
            }
        }
        if (flag)
        {
            res *= -1;
        }
        return res;
    }
};