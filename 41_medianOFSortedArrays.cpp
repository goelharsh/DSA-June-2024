#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> result;
    int n = nums1.size();
    int m = nums2.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            result.push_back(nums1[i++]);
        }
        else
        {
            result.push_back(nums2[j++]);
        }
    }

    while (i < n)
    {
        result.push_back(nums1[i++]);
    }

    while (j < m)
    {
        result.push_back(nums2[j++]);
    }

    int size = result.size();
    if (size % 2 == 0)
    {
        return (result[size / 2 - 1] + result[size / 2]) / 2.0;
    }
    else
    {
        return result[size / 2];
    }
}

int main()
{
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = findMedianSortedArrays(nums1, nums2);

    cout << "Median: " << median << endl;

    return 0;
}
