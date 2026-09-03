#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int>& nums){
    if(nums.size()<=1){
        return;
    }
    int left = 0;
    for(int right = 0; right<nums.size();right++){
        if(nums[right]!=0){
            swap(nums[left],nums[right]);
            left++;
        }
    }
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    moveZero(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}