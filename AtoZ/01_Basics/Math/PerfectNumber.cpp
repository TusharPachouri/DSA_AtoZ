#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 1;
    // cout << sqrt(6);
    for(int i = 2; i <= int(sqrt(n)); i++){
        if(n % i == 0){
            sum += i;
            if (i != n/i) {  
                sum += n/i;
            }
        }
    }
    (bool)(n == sum) ? cout << "True" : cout << "false"; 
    // return false;
    return 0; 
}