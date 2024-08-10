#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int i = num; i > 0; i--){
        for(int j = i - 1; j > 0; j--){
            cout << " ";
        }
        for(int j = 0; j < num - i + 1; j++){
            cout << (char)('A' + j );
        }
        for(int j = num - i; j > 0; j--){
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
    return 0; 
}

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
