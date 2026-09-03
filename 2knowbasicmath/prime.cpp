#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count = 0;
    // for(int i=1;i<n;i++){         brute force approach
    for(int i=1;i<=sqrt(n);i++){   //optimal approach
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<isPrime(n);
    return 0;
}