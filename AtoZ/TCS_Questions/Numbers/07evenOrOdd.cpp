#include <bits/stdc++.h>
using namespace std;

// int remainder(int num){
//     return (num % 2);
// }
int solve(int num){
    if((num & 1) == 0){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    if(solve(num) == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
}