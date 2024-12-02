class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int a = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            int b = arr[i];
            for (int c = i + 1; c < arr.size(); c++)
            {
                b ^= arr[c];
                if (b == 0)
                    a += c - i;
            }
        }
        return a;
    }
}; // 1442
// Count Triplets That Can Form Two Arrays of Equal XOR