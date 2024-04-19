#include <iostream>
using namespace std;

bool palindromeOrNot(string str, int num){
    for(int i = 0; i < num/2; i++){
        if(str[i] != str[num - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int len = str.length();
        bool res = palindromeOrNot(str, len);
        if(res){
            cout << str << ": Its a Palindrome" << endl;
        }else{
            cout << str << ": Not a Palindrome" << endl;
        }
    } 
    return 0; 
}