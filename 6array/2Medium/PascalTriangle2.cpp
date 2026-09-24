#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> triangle;
    triangle.push_back(1);
    long long previous =1;
    for(int i =1; i<=rowIndex; i++){
        long long current = previous*(rowIndex-i+1)/i;
        triangle.push_back(current);
        previous = current;
    }
    return triangle;
}

int main()
{
    int rowIndex = 3;
    vector<int> triangle = getRow(rowIndex);
    for(auto x : triangle){
        cout<<x<<" ";
    }

    return 0;
}