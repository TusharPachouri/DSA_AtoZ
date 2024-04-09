#include <bits/stdc++.h>
using namespace std;

int largestNumberInAnArray(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main(){
    vector<int> arr1 = {1,2,4,6,7,4,9,10,2};
    int largest = largestNumberInAnArray(arr1); 
    cout << "largest Number of the given array is:" << largest;  
    return 0; 
}