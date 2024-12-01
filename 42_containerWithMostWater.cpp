// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int maxArea(vector<int>& height) {
//     int n = height.size();
//     int area = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int width = j - i;
//             int conHeight = min(height[i], height[j]);
//             int currentArea = width * conHeight;
//             area = max(currentArea, area);
//         }
//     }
//     return area;
// }

// int main() {
//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int result = maxArea(height);
//     cout << "The maximum area is: " << result << endl;
//     return 0;
// }

// above approach was brute force O(n*n), now we will try to optimize the solution and that will take only o(n) time
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0;
    int j = n - 1;
    int area = 0;
    while (i < j && i < n)
    {
        int width = j - i;
        int conHeight = min(height[i], height[j]);
        int currentArea = width * conHeight;
        area = max(currentArea, area);
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height);
    cout << "The maximum area is: " << result << endl;
    return 0;
}
