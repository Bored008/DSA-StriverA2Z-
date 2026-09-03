#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& nums){
    if(nums.size()==0){
        return 0;
    }
    int left = 0;
    for(int right = 1; right<nums.size();right++){
        if(nums[left]!=nums[right]){
            nums[left+1]=nums[right];
            left++;
        }
    }
    return left+1;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    int k = removeDuplicate(nums);
    cout<<k<<endl;

    for(int i=0;i<k;i++){
        cout<<nums[i];
        if(i<k-1){
            cout<<",";
        }
    }
}