#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int largestNum(vector<int>& nums){
    int largest = INT_MIN;
    // for(int i=0;i<nums.size();i++){
    //     largest = max(nums[i], largest);
    // }
    largest = *max_element(nums.begin(),nums.end());
    return largest;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<largestNum(nums);
}