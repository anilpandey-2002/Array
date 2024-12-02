class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long long a = 0;
        int b = -1;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] < minK || nums[i] > maxK)
            {
                b = i; // Update starting index
            }
            else
            {

                a += i - b;
            }
        }

        return a;
    }
};
// 2444
// CountSubarrayWithFixedcount