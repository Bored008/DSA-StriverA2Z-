#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    int m = 0;
    unordered_map<int, int> count;

    for(int i=0; i<n; i++){
        count[nums[i]]++;
        if(count[nums[i]]>n/2){
           m = nums[i];
        }
    }
    return m;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
}