class Solution
{
public:
    int reverse(long long x)
    {
        int result = 1;
        if (x < 0)
        {
            result = -1;
            x *= -1;
        }
        long long r = rev(x);
        r = r * result;
        return (r < INT_MIN || r > INT_MAX) ? 0 : r;
    }
    long long rev(int x)
    {
        long long r = 0, i = 1;
        while (x > 0)
        {
            int rem = x % 10;
            x /= 10;
            r *= 10;
            r += rem;
            i *= 10;
        }
        return r;
    }
};