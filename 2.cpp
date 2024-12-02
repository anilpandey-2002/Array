#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int ans = 0, prefix = 0;
        unordered_map<int, int> count{{0, 1}};

        for (int num : nums)
        {
            prefix += num;
            ans += count[prefix - goal];
            count[prefix]++;
        }

        return ans;
    }
};
// Binarysubarray