class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    if (nums1.size() > nums2.size())
      return intersect(nums2, nums1);

    vector<int> a;
    unordered_map<int, int> c;

    for (const int num : nums1)
      ++c[num];

    for (const int num : nums2)
      if (const auto it = c.find(num);
          it != c.cend() && it->second-- > 0)
        a.push_back(num);

    return a;
  }
};
// Intersection of Two Arrays II