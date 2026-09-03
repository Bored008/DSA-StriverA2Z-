#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int kthLargest(vector<int> &nums, int k) {
//   priority_queue<int, vector<int>, greater<int>> pq;
//   for (int i = 0; i < nums.size(); i++) {
//     pq.push(nums[i]);
//     if (pq.size() > k) {
//       pq.pop();
//     }
//   }
//   return pq.top();
nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
return nums[k - 1];
}

int main() {
  int k;
  cin >> k;
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  cout << kthLargest(nums, k);
  return 0;
}