#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int start = 0, end = str.size() - 1;
    while(start <= end){
        if(str[start] == '0'){
            start++;
        }else if (str[end] % 2 == 0)
        {
            end--;
        }
        else if(str[start] != 0 || str[end]%2 != 0){
            cout <<  str.substr(start, end + 1);
            break;
        }
    }
    cout << "nothing";
    return 0; 
}