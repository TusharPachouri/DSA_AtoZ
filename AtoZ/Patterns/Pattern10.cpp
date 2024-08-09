#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 0; i < num;i++){
        int start = 1;
        if(i%2 == 0){
            start = 0;
        }
        for(int j = 0; j < i; j++){
            cout << start;
            start = 1 - start;
            //or start = !start
        }
        cout << endl;
    }
    return 0; 
}