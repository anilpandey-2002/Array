class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int i = n - 1, l = 0, r = n - 1;
        // a =leftsquare ha aur b rightsquare
        while (l <= r)
        {
            int a = nums[l] * nums[l];
            int b = nums[r] * nums[r];
            if (a > b)
                ans[i--] = a, ++l;
            else
                ans[i--] = b, --r;
        }

        return ans;
    }
};
// Sort the People