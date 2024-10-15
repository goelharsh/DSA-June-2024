#include<iostream>
using namespace std;

bool isPalindrome(const string &str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int palindromicSubstrings(string str){
    int count = 0;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j)) {
                count++;
            }
        }
    }
    
    return count;
}

int main(){
   string input = "racecar";
   cout << "Number of palindromic substrings: " << palindromicSubstrings(input) << endl;
   return 0;
}
