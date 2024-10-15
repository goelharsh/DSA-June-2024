#include <bits/stdc++.h>
using namespace std;


// brute force approach 
// int maxSubarraySum(vector<int> &arr) {
//       int res = arr[0];
//       for(int i = 0; i < arr.size(); i++) {
//         int currSum = 0;
      
//         for(int j = i; j < arr.size(); j++) {
//             currSum = currSum + arr[j];
//             res = max(res, currSum);
//          }
//     }
//     return res;
// }

// optimized approach 
int maxSubarraySum(vector<int> &arr) {
    int maxSoFar = arr[0];   
    int currMax = arr[0];    

    for(int i = 1; i < arr.size(); i++) {
        currMax = max(arr[i], currMax + arr[i]); 
        maxSoFar = max(maxSoFar, currMax);       
    }
    return maxSoFar;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}