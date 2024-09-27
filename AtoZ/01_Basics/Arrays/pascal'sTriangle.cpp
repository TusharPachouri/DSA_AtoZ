#include <iostream>
using namespace std;

int pascalNumberAtRowAndCol(int n, int r){
    long long res = 1;
    for(int i = 0; i < r; i++){
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main(){
    int row, col;
    cin >> row >> col;
    cout << pascalNumberAtRowAndCol(row-1, col - 1);

    return 0; 
}