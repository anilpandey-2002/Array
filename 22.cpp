class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<int> d;
        int n = nums.size();

        for (int num : nums)
        {
            mp[num]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                d.push_back(it->first);
            }
        }

        return d;
    }
}; // 260
// RelativeSortArray