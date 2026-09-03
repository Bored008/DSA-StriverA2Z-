#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  int n = nums.size();
  vector<int> ans;
  // for (int i = 0; i < n; i++) {
  //   for (int j = i + 1; j < n; j++) {
  //     if (nums[i] + nums[j] == target) {
  //       ans = {i, j};
  //     }
  //   }
  // }

  unordered_map<int, int> numMap;
  for(int i=0; i<n; i++){
    int needed = target-nums[i];
    if(numMap.find(needed)!= numMap.end()){
      ans = {numMap[needed], i};
    }else{
      numMap[nums[i]]=i;
    }
  }
  return ans;
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);
  cout << ans[0] << " " << ans[1] << endl;
}