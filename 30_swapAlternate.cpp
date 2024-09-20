#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,8,3,6,1};

    swapAlternate(arr,5);
    printArray(arr,5);
    return 0;
}