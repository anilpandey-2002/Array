class Solution
{
public:
  int maxFrequencyElements(vector<int> &nums)
  {
    vector<int> count(101);

    for (int num : nums)
      ++count[num];

    return *max_element(count.begin(), count.end()) * count[max_element(count.begin(), count.end())];
  }
};
// CountElementwithMaxF