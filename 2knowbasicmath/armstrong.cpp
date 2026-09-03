#include <bits/stdc++.h>
#include <string>
using namespace std;

bool args(int n){
    int original = n;
    int nod = to_string(n).length();
    int sum = 0;
    while(original>0){
        int lastdigit = original%10;
        sum += pow(lastdigit,nod);
        original=original/10;
    }
    if(sum==n) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<args(n);
    return 0;
}