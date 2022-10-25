class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        while (stones.size() > 1)
        {
            sort(stones.rbegin(), stones.rend());
            if (stones[0] == stones[1])
            {
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
            else
            {
                stones[1] = stones[0] - stones[1];
                stones.erase(stones.begin());
            }
        }
        if (stones.size() == 0)
            return 0;
        return stones[0];
    }
};