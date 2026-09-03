#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums) {
  int n = nums.size();
  int ans = 0;
  //   if (n == 1) {
  //     return ans=nums[1];
  //   }
  //   for (int i = 0; i < n; i++) {
  //     for (int j = i + 1; j < nums.size(); j++) {
  //       if (nums[i] == nums[j]) {
  //         i++;
  //       } else if (nums[j] != nums[i]) {
  //         return ans=nums[i];
  //       }
  //     }
  //   }

  for (int i = 0; i < n; i++) {
    ans = ans ^ nums[i];
  }
  return ans;
}

int main() {
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  cout << singleNumber(nums);
}