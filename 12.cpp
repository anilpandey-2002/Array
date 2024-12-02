class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> a;
        for (const auto &row : matrix)
        {
            int minElement = *min_element(row.begin(), row.end());
            int minIndex = find(row.begin(), row.end(), minElement) - row.begin();

            bool lucky = true;
            for (const auto &r : matrix)
            {
                if (r[minIndex] > minElement)
                {
                    lucky = false;
                    break;
                }
            }
            if (lucky)
            {
                a.push_back(minElement);
            }
        }
        return a;
    }
};
// Lucky Numbers in a Matrix