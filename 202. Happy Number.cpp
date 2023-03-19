class Solution
{
public:
    bool isHappy(int n)
    {
        while (n > 9)
        {
            int num = n;
            n = 0;
            while (num > 0)
            {
                int rem = num % 10;
                num /= 10;
                n += rem * rem;
            }
        }
        return n == 1 || n == 7;
    }
};