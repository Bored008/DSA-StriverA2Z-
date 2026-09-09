#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    int count = 1;
    int maxSeq = 1;
    if (n == 0)
    {
        return maxSeq = 0;
    }

    unordered_set<int> st(nums.begin(), nums.end());
    for (int x : st)
    {
        int currentNum = x;
        if (st.find(x - 1) == st.end())
        {
            count = 1;
            while (st.count(currentNum + 1))
            {
                currentNum++;
                count++;
            }
            maxSeq = max(count, maxSeq);
        }
    }
    return maxSeq;
}

int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << longestConsecutive(nums);

    return 0;
}