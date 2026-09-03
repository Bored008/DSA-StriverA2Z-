#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// int highFrequency(int arr[], int n, int k){
//     sort(arr,arr+n);
//     int left = 0;
//     long long sum = 0;
//     int maxFreq = 0;
//     for(int right=0; right<=n-1;right++){
//         sum = sum+arr[right];
//         while((long long)arr[right]*(right-left+1)-sum>k){
//             sum=sum-arr[left];
//             left++;
//         }
//         maxFreq=max(maxFreq, right-left+1);
//     }
//     return maxFreq;
// }

// in vectors
int highFrequency(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  int left = 0;
  long long sum = 0;
  int maxFreq = 0;
  for(int right = 0;right<nums.size();right++){
    long long target = nums[right];
    sum+= target;
    while((right-left+1)*target-sum>k){
        sum-=nums[left];
        left++;
    }
    maxFreq=max(maxFreq,right-left+1);
  }
  return maxFreq;
}

int main() {
  // int n;
  // cin>>n;
  // int k;
  // cin>>k;
  // int arr[n];
  // for(int i=0;i<n;i++){
  //     cin>>arr[i];
  // }
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  cout << highFrequency(nums, k);
  return 0;
}