class Solution
{
public:
  double averageWaitingTime(vector<vector<int>> &customers)
  {
    double a = 0;
    double b = 0;
    for (const vector<int> &c : customers)
    {
      b = max(b, 1.0 * c[0]) + c[1];
      a += b - c[0];
    }
    return 1.0 * a / customers.size();
  }
};
// Average Waiting Time