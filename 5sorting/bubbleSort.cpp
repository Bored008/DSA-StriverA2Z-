#include <bits/stdc++.h>
using namespace std;

// void bubbleSort(int n, int arr[]) {
//   for (int i = n - 1; i >= 0; i--) {
//     int didSwap = 0;
//     for (int j = 0; j <= i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         int temp = arr[j + 1];
//         arr[j + 1] = arr[j];
//         arr[j] = temp;
//         didSwap = 1;
//       }
//     }
//     if(didSwap == 0){
//         break;
//     }
//     cout<<"run"<<endl;
//   }
// }

void bubbleSort(vector<int>& nums) {
  for (int i = nums.size() - 1; i >= 0; i--) {
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j + 1];
        nums[j + 1] = nums[j];
        nums[j] = temp;
        didSwap = 1;
      }
    }
    if(didSwap == 0){
        break;
    }
    cout<<"run"<<endl;
  }
}

// int main() {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   bubbleSort(n, arr);
//   for (int i = 0; i < n; i++) {
//     cout << arr[i]<<" ";
//   }
//   return 0;
// }

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}