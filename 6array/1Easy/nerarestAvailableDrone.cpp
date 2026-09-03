#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int nearestDrone(vector<vector<int>>& drones, vector<int>& target){
    int bestIndex = -1;
    int minDistance = INT_MAX;
    for(int i=0;i<drones.size();i++){
        int distance = abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
        if(drones[i][2]>=distance && distance<minDistance){
            minDistance = distance;
            bestIndex = i;
        }
    }
    return bestIndex;
}

int main(){
    vector<int> target(2);
    cin>>target[0]>>target[1];

    int numsDrones;
    cin>>numsDrones;

    vector<vector<int>> drones(numsDrones, vector<int>(3));

    for(int i=0;i<numsDrones;i++){
        cin>>drones[i][0]>>drones[i][1]>>drones[i][2];
    }

    int result = nearestDrone(drones, target);
    cout<<result<<endl;

    return 0;
}