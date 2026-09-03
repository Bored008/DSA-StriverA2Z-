#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int minPrice = INT_MAX;
    int maxProfit = 0;
    int n = prices.size();
    for(int i=0; i<n; i++){
        minPrice = min(minPrice, prices[i]);
        int profit = prices[i] - minPrice;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}