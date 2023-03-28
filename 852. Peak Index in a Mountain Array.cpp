// Solution in Linear time
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int size = arr.size();
        int index = -1;
        int largest = 0;
        for (int i = 0; i < size; i++)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
                index = i;
            }
        }
        return index;
    }
};
// better approach
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int size = arr.size();
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;
        while (start < end)
        {
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return mid;
    }
};