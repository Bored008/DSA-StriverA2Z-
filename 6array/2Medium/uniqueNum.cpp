#include <bits/stdc++.h>
using namespace std;

int totalNumbers(vector<int> &digits)
{
    unordered_set<int> uniqueNums;
    int n = digits.size();
    for(int i=0; i<=n-1;i++){
        for(int j=0; j<=n-1; j++){
            for(int k=0; k<=n-1; k++){
                if(i!=j && j!=k && k!=i){
                    if(digits[i]!=0 && digits[k]%2==0){
                        int num = digits[i]*100+digits[j]*10+digits[k];
                        uniqueNums.insert(num);
                    }
                }
            }
        }
    }
    return uniqueNums.size();
}

int main()
{
    vector<int> digits = {1,2,3,4};
    cout<<totalNumbers(digits);

    return 0;
}