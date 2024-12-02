class Solution
{
public:
  int islandPerimeter(vector<vector<int>> &grid)
  {
    int a = 0;
    int b = 0;

    for (int i = 0; i < grid.size(); ++i)
      for (int j = 0; j < grid[0].size(); ++j)
        if (grid[i][j])
        {
          ++a;
          if (i - 1 >= 0 && grid[i - 1][j])
            ++b;
          if (j - 1 >= 0 && grid[i][j - 1])
            ++b;
        }

    return a * 4 - b * 2;
  }
}; // 463
// IslandPerimeter