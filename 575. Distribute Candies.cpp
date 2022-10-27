class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < candyType.size(); i++)
        {
            if (m.find(candyType[i]) == m.end())
            {
                count++;
                m[candyType[i]] = candyType[i];
            }
        }
        return min(count, candyType.size() / 2);
    }
    int min(int a, int b)
    {
        if (a < b)
        {
            return a;
        }
        return b;
    }
};