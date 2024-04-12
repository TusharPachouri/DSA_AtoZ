#include <iostream>
using namespace std;
void primeFactors(int num){
    for(int i = 2; i * i <= num; i++){
        while(num % i == 0){
            cout << i << " ";
            num /= i;
        }
    }
    if(num > 1){
        cout << num;
    }
}
int main(){
    int num;
    cin >> num;
    cout << "Prime Factors of " << num << " are: "; 
    primeFactors(num);
    return 0; 
}