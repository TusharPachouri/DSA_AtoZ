#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - i; j++){
            cout << "*";
        }
        for(int j = 0; j < i*2; j++){
            cout << " ";
        }
        for(int j = 0; j < num - i; j++){
            cout << "*";
        }
        
        cout << endl;
    }
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < 2*(num - i - 1) ; j++){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }

        cout << endl;
    }
    return 0; 
}