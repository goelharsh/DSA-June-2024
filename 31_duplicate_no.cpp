#include<iostream>
#include <algorithm>
#include<unordered_set>
using namespace std;

// 1. brute force approach -  (n^2)
// int findDuplicate(int num[], int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(num[i]==num[j]){
//                 return num[i];
//             }
//         }
//     }
//     return -1;
// }  

// 2. more otimized approach  -  (n log(n))
// int findDuplicate(int num[], int n){
//     sort(num, num+n);

//     for(int i=0;i<n;i++){
//             if(num[i]==num[i+1]){
//                 return num[i];
//             }
//     }
//     return -1;
// }  


// 3. more otimized approach  -  Time = o(n) but space is also o(n)
// int findDuplicate(int num[], int n){ 

//     unordered_set<int> s;

//     for(int i=0;i<n;i++){
//         // if the element is already in the set
//         if(s.find(num[i]) != s.end() ){
//             return num[i];
//         }
//         s.insert(num[i]);
//      }
//     return -1;
// }  

// 4. space and time efficient solution 
int findDuplicate(int nums[]){ 

    int slow = 0, fast =0;

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);

    slow = 0;
    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }


    return slow;
}

int main(){
    int arr[] = {1,3,4,2,2};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int ans = findDuplicate(arr, size);
    int ans = findDuplicate(arr);
    cout<<ans<<endl;
    return 0;
}