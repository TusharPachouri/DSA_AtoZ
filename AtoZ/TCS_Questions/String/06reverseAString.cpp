#include <bits/stdc++.h>
using namespace std;
void reverseString(string str){
    int len = str.length();
    int start = 0, end = len - 1;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str << endl;
}
int main(){
    string str = "Tushar";
    reverseString(str);
    return 0; 
}