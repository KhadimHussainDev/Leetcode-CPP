class Solution
{
public:
    int hammingWeight(uint32_t num)
    {
        int count = 0;
        while (num > 0)
        {
            if (num % 2 == 1)
                count++;
            num /= 2;
        }
        return count;
    }
};