#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k) {
  int n = nums.size();
  int maxLength = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += nums[j];
      if (sum == k) {
        maxLength = max(maxLength, j - i + 1);
      }
    }
  }
  return maxLength;
}

int main() {
  int k;
  cin >> k;
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  cout << longestSubarray(nums, k);
}