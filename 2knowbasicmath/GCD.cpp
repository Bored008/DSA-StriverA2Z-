#include <bits/stdc++.h>
using namespace std;

int factorgcd(int a, int b){
    int max = 1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            max = i;
        }
    }
    return max;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = factorgcd(a,b);
    cout<<ans;
    return 0;
}