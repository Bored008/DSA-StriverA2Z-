#include <bits/stdc++.h>
using namespace std;

void printnto1(int n){
    if(n>0){
        cout<<n<<" ";
        printnto1(n-1);
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    printnto1(n);
    return 0;
}