//Sorting the array:
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

//My Approach:
// #include <bits/stdc++.h>
// using namespace std;

// int largestNumberInAnArray(int arr[], int len){
//     int res = arr[0];
//     for(int i = 1; i < len; i++){
//         if(arr[i] > res ){
//             res = arr[i];
//         }
//     }
//     return res;
// }

// int main(){
//     int arr1[] = {1,2,4,6,7,4,9};
//     int length = sizeof(arr1) / sizeof(arr1[0]);
//     int res = largestNumberInAnArray(arr1, length);
//     cout << "Largest Element of the array is: " << res;
//     return 0; 
// }