#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int>& arr) {
    int zero = 0, one = 0, two = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            zero++;
        } else if (arr[i] == 1) {
            one++;
        } else {
            two++;
        }
    }

    int index = 0;
    while (zero--) {
        arr[index++] = 0;
    }
    while (one--) {
        arr[index++] = 1;
    }
    while (two--) {
        arr[index++] = 2;
    }
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 0, 2};

    sort012(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
