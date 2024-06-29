#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char start = 'A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<start<<" ";
            start = start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}