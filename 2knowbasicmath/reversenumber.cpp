#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int x) {
  long long r = 0;
  while (x != 0) {
    int lastdigit = x % 10;
    r = r * 10 + lastdigit;
    x = x / 10;
  }
  if(r>INT_MAX || r<INT_MIN){
    return 0;
  }
  return r;
}

int main() {
  int x;
  cin >> x;
  int reverse = reverseNumber(x);
  cout << reverse;
  return 0;
}