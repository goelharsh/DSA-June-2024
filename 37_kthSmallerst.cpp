#include <iostream>
#include <vector>
#include <queue>  // for priority_queue
using namespace std;

// Function to find the k-th smallest element in an array
int kthSmallest(vector<int> &arr, int k) {
    priority_queue<int> mh;  // max-heap by default

    // Insert the first k elements into the max-heap
    for (int i = 0; i < k; i++) {
        mh.push(arr[i]);
    }

    // Process the remaining elements
    for (int i = k; i < arr.size(); i++) {
        if (arr[i] < mh.top()) {
            mh.pop();          // Remove the largest element
            mh.push(arr[i]);    // Push the new element
        }
    }

    // The root of the max-heap is the k-th smallest element
    return mh.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};  // Example array
    int k = 3;  // Find the 3rd smallest element

    // Call the function and display the result
    int result = kthSmallest(arr, k);
    cout << "The " << k << "-th smallest element is: " << result << endl;

    return 0;
}
