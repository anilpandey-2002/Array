class Solution
{
public:
  vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
  {
    vector<int> v;
    vector<int> c(1001);

    for (int a : arr1)
      ++c[a];

    for (int a : arr2)
      while (c[a]-- > 0)
        v.push_back(a);

    for (int num = 0; num < 1001; ++num)
      while (c[num]-- > 0)
        v.push_back(num);

    return v;
  }
}; // 1122
// RelativeSortArray