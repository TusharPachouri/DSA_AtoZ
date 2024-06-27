#include <iostream>
using namespace std;

int binarySearch(int arr[], int num, int target){
    int start = 0, end = num;
    while(start <= end){
        int mid = start + ( end - start ) / 2;
        if(arr[mid] == target ) {
            return mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[6] = { 1, 5, 8, 9, 10, 11};
    int target = 10;
    cout << binarySearch(arr, 6, target);
    return 0; 
}