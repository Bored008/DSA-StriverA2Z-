#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void countFreq(int arr[], int n){
    unordered_map<int, int> map;

    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }

    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countFreq(arr, n);
    return 0;
}