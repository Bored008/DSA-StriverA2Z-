#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int> &nums, int k) {
  unordered_map<int, int> prefixMap;
  int maxLength = 0;
  int currentSum = 0;
  for (int i = 0; i < nums.size(); i++) {
    currentSum += nums[i];
    if (currentSum == 0) {
      maxLength = i + 1;
    } else if (prefixMap.find(currentSum) != prefixMap.end()) {
      maxLength = max(maxLength, i - prefixMap[currentSum]);
    } else {
      prefixMap[currentSum] = i;
    }
  }
  return maxLength;
}

int main() {
  int k = 0;
  vector<int> nums = {1, 2, 1, 1, 1, -5 - 1};
  cout << longestSubarray(nums, k);
}