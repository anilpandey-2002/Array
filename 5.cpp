class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        const int a = ranges::max(nums);
        long long b = 0;
        int c = 0;

        for (int l = 0, r = 0; r < nums.size(); ++r)
        {
            if (nums[r] == a)
                ++c;
            while (c == k)
                if (nums[l++] == a)
                    --c;
            b += l;
        }

        return b;
    }
};
// 2962
// CountSubarrays