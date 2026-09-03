#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2) {
  int i = 0;
  int j = 0;
  vector<int> result;

  while (i < nums1.size() && j < nums2.size()) {
    if (nums1[i] < nums2[j]) {
      if (result.empty() || result.back() != nums1[i]) {
        result.push_back(nums1[i]);
      }
      i++;
    } else if (nums1[i] > nums2[j]) {
      if (result.empty() || result.back() != nums2[j]) {
        result.push_back(nums2[j]);
      }
      j++;
    } else if (nums1[i] == nums2[j]) {
      if (result.empty() || result.back() != nums1[i]) {
        result.push_back(nums1[i]);
      }
      i++;
      j++;
    }
  }

  while (i < nums1.size()) {
    if (result.empty() || result.back() != nums1[i]) {
      result.push_back(nums1[i]);
    }
    i++;
  }

  while (j < nums2.size()) {
    if (result.empty() || result.back() != nums2[j]) {
      result.push_back(nums2[j]);
    }
    j++;
  }

  return result;
}

int main() {
  vector<int> nums1 = {1, 2, 3, 6, 8};
  vector<int> nums2 = {2, 3, 4, 6, 7, 8, 9};
  vector<int> finalArray = unionArray(nums1, nums2);

  for(int i = 0; i<finalArray.size(); i++){
    cout<<finalArray[i]<<" ";
  }
  cout<<endl;
  return 0;
}