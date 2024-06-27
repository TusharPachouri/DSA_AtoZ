#include <iostream>
using namespace std;

void printArray(int arr[], int num){
    for(int i = 0; i < num; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return;
}

void selectionSort(int arr[], int num){
    int min_ind;
    for(int i = 0; i < num - 1; i++){
        min_ind = i;
        for(int j = i + 1; j < num; j++){
            if(arr[min_ind] > arr[j]){
                min_ind = j;
            }
        }
        if( min_ind != i){
            swap(arr[i], arr[min_ind]);
        }
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11 , 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    printArray(arr,n);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr,n);

    return 0; 
}