class Solution
{
public:
  int leastInterval(vector<char> &tasks, int n)
  {
    if (n == 0)
      return tasks.size();

    vector<int> count(26);

    for (const char task : tasks)
      ++count[task - 'A'];

    const int a = ranges::max(count);

    const int b = (a - 1) * (n + 1);

    const int c = ranges::count(count, a);

    return max(b + c, static_cast<int>(tasks.size()));
  }
};
// 621
//  TaskScheduler
