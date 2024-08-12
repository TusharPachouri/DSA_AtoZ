#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << j;
        }
        cout << endl; 
        
    }
    
    return 0; 
}
// **
// 1
// 12
// 123
// 1234
// 12345
// **