#include <vector>
#include <algorithm>

class Solution
{
public:
    int minDays(std::vector<int> &bloomDay, int m, int k)
    {
        if (bloomDay.size() < static_cast<long>(m) * k)
            return -1;

        int l = *std::min_element(bloomDay.begin(), bloomDay.end());
        int r = *std::max_element(bloomDay.begin(), bloomDay.end());

        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid))
                r = mid;
            else
                l = mid + 1;
        }

        return l;
    }

private:
    bool canMakeBouquets(const std::vector<int> &bloomDay, int m, int k, int days)
    {
        int a = 0, b = 0;
        for (int day : bloomDay)
        {
            if (day <= days)
            {
                if (++b == k)
                {
                    a++;
                    b = 0;
                    if (a == m)
                        return true;
                }
            }
            else
            {
                b = 0;
            }
        }
        return a >= m;
    }
}; // 1482
// Minimum Number of Days to Make m Bouquets