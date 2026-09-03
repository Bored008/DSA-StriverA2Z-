#include <bits/stdc++.h>
using namespace std;

void ntimescal(int n){
    if(n>0){
        cout<<"Ashish ";
        ntimescal(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    ntimescal(n);
    return 0;
}