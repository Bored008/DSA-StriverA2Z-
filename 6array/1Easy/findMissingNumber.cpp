#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int n = nums.size();
    int expectedSum = n*(n+1)/2;
    int actualSum = 0;
    for(int i = 0; i<n; i++){
        actualSum += nums[i];
    }
    return expectedSum - actualSum;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<missingNumber(nums);
}