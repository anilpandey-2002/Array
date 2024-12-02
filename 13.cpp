class Solution
{
public:
  int minSubarray(vector<int> &nums, int p)
  {
    long sum = accumulate(nums.begin(), nums.end(), 0L);
    int r = sum % p;
    if (r == 0)
      return 0;

    unordered_map<int, int> prefixToIndex{{0, -1}};
    int a = nums.size(), prefix = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
      prefix = (prefix + nums[i]) % p;
      int target = (prefix - r + p) % p;
      if (prefixToIndex.count(target))
        a = min(a, i - prefixToIndex[target]);
      prefixToIndex[prefix] = i;
    }

    return a == nums.size() ? -1 : a;
  }
};
// Lucky Numbers in a Matrix