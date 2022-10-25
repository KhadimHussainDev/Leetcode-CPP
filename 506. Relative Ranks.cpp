class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> vec;
        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());
        map<int, int> m;
        for (int i = 0; i < score.size(); i++)
        {
            m[temp[i]] = i + 1;
        }
        for (int i = 0; i < score.size(); i++)
        {
            int position = m[score[i]];
            if (position == 1)
            {
                vec.push_back("Gold Medal");
            }
            else if (position == 2)
            {
                vec.push_back("Silver Medal");
            }
            else if (position == 3)
            {
                vec.push_back("Bronze Medal");
            }
            else
            {
                vec.push_back(to_string(position));
            }
        }
        return vec;
    }
};