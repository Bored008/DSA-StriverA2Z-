#include <bits/stdc++.h>
using namespace std;

int secondlar(vector<int>& nums){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]>largest){
            secondLargest = largest;
            largest = nums[i];
        }else if(nums[i] > secondLargest && nums[i] != largest){
            secondLargest = nums[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<secondlar(nums);
}