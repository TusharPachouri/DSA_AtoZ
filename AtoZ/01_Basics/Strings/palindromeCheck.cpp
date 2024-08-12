#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    bool isPalindrome = true;
    int start = 0, end = str.size() - 1;
    while(start < end){
        if(str[start] != str[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    isPalindrome ? cout << "True" : cout << "False";
    return 0; 
}