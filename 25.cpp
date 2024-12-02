class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<int, string>> a;
        for (int i = 0; i < names.size(); ++i)
            a.emplace_back(heights[i], names[i]);

        sort(a.rbegin(), a.rend());

        vector<string> s;
        for (const auto &[_, name] : a)
            s.push_back(name);

        return s;
    }
};
// Sort the People