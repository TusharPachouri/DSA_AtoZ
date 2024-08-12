#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        for (int j = num - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j < 2 * i ; j++)
        {
            cout << "*";
        }
        for (int j = num - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

// *******************
//  ***************** 
//   ***************  
//    *************   
//     ***********    
//      *********     
//       *******      
//        *****       
//         ***        
//          *         
