class Solution
{
public:
    int numSquares(int n)
    {
        int count = 1;
        vector<int> arr(n + 1, INT_MAX);
        arr[0] = 0;
        while (count * count <= n)
        {
            int num = count * count;
            for (int i = num; i <= n; i++)
            {
                arr[i] = min(arr[i], arr[i - num] + 1);
            }
            count++;
        }
        return arr[n];
    }
};