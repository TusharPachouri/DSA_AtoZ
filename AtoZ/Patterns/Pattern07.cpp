#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for (int i = 1; i < num + 1; i++){
        for(int j = num - i ; j > 0; j--){
            cout << " ";
        }
        for(int k = 1; k < i*2 ; k++){
            cout << "*";
        }
        for(int j = num - i ; j > 0; j--){
            cout << " ";
        }
        cout << endl;
    }
    
    return 0; 
}

//          *         
//         ***        
//        *****       
//       *******      
//      *********     
//     ***********    
//    *************   
//   ***************  
//  ***************** 
// *******************
