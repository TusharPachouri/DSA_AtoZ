#include <iostream>
using namespace std;

int factorial(int N){
    if(N == 1 || N == 0){
        return 1;
    }else{
        return N*factorial(N-1);
    }
}

int permutation(int N, int r){
    return factorial(N)/(factorial(N-r));
}

int main(){
    // n!/(n-r)!
    int N = 6, r = 4;
    cout << "Permutation: " << permutation(N,r);
    return 0; 
}