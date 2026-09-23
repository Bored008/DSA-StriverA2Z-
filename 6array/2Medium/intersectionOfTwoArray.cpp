#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
{
    // vector<int> result;
    // for (int i = 0; i < nums1.size(); i++)
    // {
    //     for (int j = 0; j < nums2.size(); j++)
    //     {
    //         if (nums1[i] == nums2[j])
    //         {
    //             result.push_back(nums1[i]);
    //         }
    //     }
    // }
    // return result;

    
    
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 3, 5};
    vector<int> nums2 = {1, 2, 7};
    vector<int> result = intersectionArray(nums1, nums2);

    for(auto x : result){
        cout<<x<<" ";
    }

    return 0;
}