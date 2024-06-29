#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }

        int start = i-1;
        while(start){
            cout<<"*";
            start=start-1;
        }

        int nextStart = i-1;
        while(nextStart){
            cout<<"*";
            nextStart = nextStart-1;
        }

        
        cout<<endl;
        i=i+1;
    }
    return 0;
}


