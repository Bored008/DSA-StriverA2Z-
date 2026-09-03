#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void reverseArray(vector<int>& arr){
        reverse(arr.begin(),arr.end());
    }
};

int main(){
    vector<int> arr;
    int n;
    while(cin >> n){
        arr.push_back(n);
    }
    solution obj;
    obj.reverseArray(arr);
    for(int x : arr){
        cout<< x << " ";
    }
    return 0;
}