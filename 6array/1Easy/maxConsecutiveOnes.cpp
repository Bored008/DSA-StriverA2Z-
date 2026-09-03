#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int currentStreak = 0;
  int maxStreak = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      currentStreak++;
      maxStreak = max(currentStreak, maxStreak);
    } else if (nums[i] == 0) {
      currentStreak = 0;
    }
  }
  return maxStreak;
}

int main() {
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  cout << findMaxConsecutiveOnes(nums);
}