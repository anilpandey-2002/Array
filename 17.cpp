class Solution
{
public:
  int countStudents(vector<int> &students, vector<int> &sandwiches)
  {
    vector<int> a(2);

    for (const int student : students)
      ++a[student];

    for (int i = 0; i < sandwiches.size(); ++i)
    {
      if (a[sandwiches[i]] == 0)
        return sandwiches.size() - i;
      --a[sandwiches[i]];
    }

    return 0;
  }
}; // 1700
// No.ofSTudentUnabletoEatLunch