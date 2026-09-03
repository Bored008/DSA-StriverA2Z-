#include <bits/stdc++.h>
using namespace std;

// void selectionSort(int n, int arr[]) {
//   for (int i = 0; i <= n - 2; i++) {
//     int mini = i;
//     for (int j = i; j <= n - 1; j++) {
//       if (arr[j] < arr[mini]) {
//         mini = j;
//       }
//     }
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }
// }

void selectionSort(vector<int> &arr) {
  for (int i = 0; i <= arr.size() - 2; i++) {
    int mini = i;
    for (int j = i; j <= arr.size() - 1; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    swap(arr[i], arr[mini]);
  }
}

// int main() {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   selectionSort(n, arr);
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
  selectionSort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}