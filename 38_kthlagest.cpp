#include <iostream>
#include <vector>
#include <queue>  // for priority_queue
using namespace std;

// Function to find the k-th largest element in an array
int kthLargest(vector<int> &arr, int k) {
    // Create a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert the first k elements into the min-heap
    for (int i = 0; i < k; i++) {
        minHeap.push(arr[i]);
    }

    // Process the remaining elements
    for (int i = k; i < arr.size(); i++) {
        if (arr[i] > minHeap.top()) {
            minHeap.pop();          // Remove the smallest element
            minHeap.push(arr[i]);   // Push the new element
        }
    }

    // The root of the min-heap is the k-th largest element
    return minHeap.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};  // Example array
    int k = 3;  // Find the 3rd largest element

    // Call the function and display the result
    int result = kthLargest(arr, k);
    cout << "The " << k << "-th largest element is: " << result << endl;

    return 0;
}
