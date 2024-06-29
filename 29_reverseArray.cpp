// #include<iostream>
// using namespace std;

// void reverseArray(int arr[], int size){
//     for(int i=size-1;i>0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5] = {2,7,9,13,17};

//     reverseArray(arr,5);

    
//     return 0;
// }


//REVERSE BY SWAPPING MECHANISM

#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0,end=size-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,7,9,13,17};

    reverseArray(arr,5);
    printArray(arr,5);

    
    return 0;
}