#include <bits/stdc++.h>
using namespace std;

bool sortArray(vector<int>& nums){
    int count = 0;
    for(int i=0;i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]){
            count++;
        }
    }

    if(nums[0]<nums[nums.size()-1]){
        count++;
    }

    return count <= 1;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<< boolalpha << sortArray(nums);
}