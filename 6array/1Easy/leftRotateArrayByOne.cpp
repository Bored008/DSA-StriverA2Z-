#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int>& nums) {
int k = 1;
    //   vector<int> temp(nums.size());
//   int n = nums.size();
//   for (int i = 0; i < n; i++) {
//     temp[(i + k) % n] = nums[i];
//   }
//   nums = temp;

int n = nums.size();
// k= k%n;
// k= n-1;

if(n<=1){
  return;
}
k = n -1;
reverse(nums.begin(), nums.end());
reverse(nums.begin(), nums.begin()+k);
reverse(nums.begin()+k, nums.end());
}

int main() {
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  leftRotateByOne(nums);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  return 0;
}