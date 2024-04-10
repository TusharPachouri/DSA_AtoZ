#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 4, 6, 7, 4, 9, 10, 2};
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    int large = INT16_MIN;
    int secondLarge = INT16_MIN;
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i]< small){
            small = arr1[i];
        }
    }
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i] < secondSmall && arr1[i]!= small){
            secondSmall = arr1[i];
        }
    }
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i]> large){
            large = arr1[i];
        }
    }
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i] > secondLarge && arr1[i]!= large){
            secondLarge = arr1[i];
        }
    }
    cout << "Largest Second Number is: " << secondLarge << endl;
    cout << "Smallest Second Number is: " << secondSmall << endl;
}


// #include <bits/stdc++.h>
// using namespace std;

// void secondLargestAndSmallestElementInArray(vector<int> arr)
// {
//     int length = arr.size();
//     if (length <= 1)
//     {
//         cout << "Smallest Second Number is: " << -1 << endl;
//         cout << "Largest Second Number is: " << -1 << endl;
//         return;
//     }
//     sort(arr.begin(), arr.end());
//     cout << "Largest Second Number is: " << arr[length - 2] << endl;
//     cout << "Smallest Second Number is: " << arr[1] << endl;
// }

// int main()
// {
//     vector<int> arr1 = {1, 2, 4, 6, 7, 4, 9, 10, 2};
//     vector<int> arr2 = {1};
//     secondLargestAndSmallestElementInArray(arr1);
//     secondLargestAndSmallestElementInArray(arr2);
// }