class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq(piles.begin(), piles.end());
        while (k > 0)
        {
            k--;
            int temp = pq.top();
            pq.pop();
            temp -= temp / 2;
            pq.push(temp);
        }
        int total = 0;
        while (!pq.empty())
        {
            total += pq.top();
            pq.pop();
        }
        return total;
    }
};