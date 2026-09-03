#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int sum = 0;
    int maxSum = INT_MIN;
    int n = nums.size();

    for(int i=0; i<n; i++){
        sum += nums[i];
        maxSum = max(maxSum, sum);
        if(sum<0){
            sum = 0;
        }
    }

    return maxSum;
}

int main(){
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    cout<<maxSubArray(nums);
    return 0;
}