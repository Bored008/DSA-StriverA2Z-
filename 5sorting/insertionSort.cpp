#include <bits/stdc++.h>
using namespace std;

// void insertionSort(int n, int arr[]) {
//   for (int i = 0; i < n; i++) {
//     int j = i;
//     while (j > 0 && arr[j - 1] > arr[j]) {
//       int temp = arr[j - 1];
//       arr[j - 1] = arr[j];
//       arr[j] = temp;

//       j--;
//     }
//   }
// }
void insertionSort(vector<int>& nums) {
  for (int i = 0; i <= nums.size()-1; i++) {
    int j = i;
    while (j > 0 && nums[j - 1] > nums[j]) {
      swap(nums[j],nums[j-1]);
      j--;
    }
  }
}

// int main() {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   insertionSort(n, arr);
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertionSort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}