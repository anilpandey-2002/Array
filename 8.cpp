class Solution
{
public:
  int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int X)
  {
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < customers.size(); ++i)
    {
      if (grumpy[i] == 0)
        a += customers[i];
      else
        c += customers[i];
      if (i >= X && grumpy[i - X] == 1)
        c -= customers[i - X];
      b = max(b, c);
    }

    return a + b;
  }
};
// 1052
// Grumpy Bookstore Owner