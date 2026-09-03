#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void reverse(int k, vector<int>& nums) {
//   vector<int> temp(nums.size());
//   int n = nums.size();
//   for (int i = 0; i < n; i++) {
//     temp[(i + k) % n] = nums[i];
//   }
//   nums = temp;
k= k%nums.size();
reverse(nums.begin(), nums.end());
reverse(nums.begin(), nums.begin()+k);
reverse(nums.begin()+k, nums.end());
}

int main() {
  int k;
  cin >> k;
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  reverse(k, nums);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  return 0;
}