#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    int key;
    cin>>key;

    bool result = linearSearch(arr, 10, key);

    if(result){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key not present"<<endl;
    }
    return 0;
}