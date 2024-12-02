class Solution
{
public:
  vector<int> findDuplicates(vector<int> &nums)
  {
    vector<int> a;

    for (const int b : nums)
    {
      nums[abs(b) - 1] *= -1;
      if (nums[abs(b) - 1] > 0)
        a.push_back(abs(b));
    }

    return a;
  }
};
// FindAllDuplicatesinArray