#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n>0){
        count = count+1;
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int digit = countDigit(n);
    cout<<digit;
    return 0;
}