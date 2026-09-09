#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    int maxFromRight = INT_MIN;
    vector<int> leader;
    for(int i = n-1; i>=0; i--){
        if(nums[i]>maxFromRight){
            leader.push_back(nums[i]);
            maxFromRight = nums[i];
        }
    }
    reverse(leader.begin(), leader.end());
    return leader;
}

int main()
{
    vector<int> nums = {-3, 4, 5, 1, -4, -5};
    vector<int> ans = leaders(nums);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}