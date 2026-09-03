#include <bits/stdc++.h>
using namespace std;

// int divisor(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     divisor(n);
//     return 0;
// }

class Solution{
    public:
    vector<int> divisor(int n){
        vector<int> res;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                res.push_back(i);
                if(i != n/i){
                    res.push_back(n/i);
                }
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int> result = sol.divisor(n);
    cout<<"Divisor of"<<n<<": ";
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}