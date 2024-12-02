#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            return i;
        }
    }
    return n;
}

int main() {
    vector<int> nums = {3, 0, 1}; 

    int result = missingNumber(nums);

    cout << "The missing number is: " << result << endl;

    return 0;
}
