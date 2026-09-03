#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= 4; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print2(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void print4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

void print5(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print6(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void print7(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    // star
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }

    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

void print8(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    // star
    for (int j = 0; j < n * 2 - i * 2 - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print9(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    // star
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }

    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    // star
    for (int j = 0; j < n * 2 - i * 2 - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print10(int n) {
  for (int i = 1; i <= 2 * n - 1; i++) {
    int star = i;
    if (i > n)
      star = 2 * n - i;
    for (int j = 1; j <= star; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void print11(int n) {
  for (int i = 0; i < n; i++) {
    int start = 1;
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++) {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void print12(int n) {
  for (int i = 1; i <= n; i++) {
    //number
    for(int j=1;j<=i;j++){
      cout<<j;
    }

    //space
    for(int j=1;j<=2*n-2*i;j++){
      cout<<" ";
    }

    //number
    for(int j=i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
  }
}

void print13(int n) {
  int num=1;
  for (int i = 1; i <= n; i++) {
    for (int j=1;j<=i;j++){
      cout<<num<<" ";
      num = num+1;
    }
    cout<<endl;
  }
}

void print14(int n){
  for (int i=0;i<n;i++){
    for (char j='A';j<='A'+i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void print15(int n){
  for(int i=0;i<=n;i++){
    for(char j='A';j<='A'+n-i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void print16(int n){
  for (int i=0;i<n;i++){
    char ch = 'A'+i;
    for (char j='A';j<='A'+i;j++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

void print17(int n){
  for (int i=0;i<n;i++){
    //space
    for(int j=0;j<=n-i-1;j++){
      cout<<" ";
    }

    //letter
    for (char j='A';j<='A'+i;j++){
      cout<<j;
    }

    //reverse letter
    for(char j='A'+i-1;j>='A';j--){
      cout<<j;
    }

    cout<<endl;
  }
}

void print18(int n){
  for (int i=0;i<n;i++){
    for(char j='A'+n-i-1;j<='A'+n-1;j++){
      cout<<j<<" ";
    }

    cout<<endl;
    
  }
}

int main() {
  int n;
  cin >> n;
  print18(n);
  return 0;
}