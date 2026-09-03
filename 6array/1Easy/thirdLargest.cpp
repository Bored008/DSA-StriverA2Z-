#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int> &nums) {
  long long largest = LLONG_MIN;
  long long secondLargest = LLONG_MIN;
  long long thirdLargest = LLONG_MIN;
  for (int i = 0; i < nums.size(); i++) {
    // if (nums[i] > largest) {
    //   thirdLargest = secondLargest;
    //   secondLargest = largest;
    //   largest = nums[i];
    // } else if (nums[i] > secondLargest && nums[i] != largest) {
    //   thirdLargest = secondLargest;
    //   secondLargest = nums[i];
    // } else if (nums[i] > thirdLargest && nums[i] < secondLargest &&
    //            nums[i] != largest && nums[i] != secondLargest) {
    //   thirdLargest = nums[i];
    // }

    for (int i = 0; i < nums.size(); i++) {
      largest = max(largest, (long long)nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] < largest)
        secondLargest = max(secondLargest, (long long)nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] < secondLargest)
        thirdLargest = max(thirdLargest, (long long)nums[i]);
    }

    if (thirdLargest == LLONG_MIN) {
      return largest;
    } else {
      return thirdLargest;
    }
  }
}

int main() {
  vector<int> nums;
  int x;
  while (cin >> x) {
    nums.push_back(x);
  }
  cout << thirdMax(nums);
}