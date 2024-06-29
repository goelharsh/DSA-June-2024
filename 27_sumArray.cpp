#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[5] = {2,7,1,-4,11};
    for(int i=0; i < 5; i++){
        sum +=arr[i];
    }
    cout<<sum;
    return 0;
}