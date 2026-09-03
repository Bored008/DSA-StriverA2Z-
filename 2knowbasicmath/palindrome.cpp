#include<bits/stdc++.h>
using namespace std;

bool palindrome(int x){
    long long original = x;
    long long rev = 0;
    while(x>0){
        int lastdigit = x%10;
        rev = rev*10 + lastdigit;
        x = x/10;
    }
    if(rev>INT_MAX || rev<INT_MIN) return false;
    if(rev == original) return true;
    else return false;
}

int main(){
    int x;
    cin>>x;
    cout<<boolalpha<<palindrome(x);
    return 0;
}