class Solution
{
public:
  int pivotInteger(int n)
  {
    const int a = (n * n + n) / 2;
    const int b = sqrt(a);
    return b * b == a ? b : -1;
  }
};
// Pivotinteger