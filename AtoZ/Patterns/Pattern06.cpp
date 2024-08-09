#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for (int i = num; i > 0; i--){
        for(int j = 1; j < i + 1; j++){
            cout << j;
        }
        cout << endl;
    }    
    return 0; 
}

// 12345
// 1234
// 123
// 12
1
