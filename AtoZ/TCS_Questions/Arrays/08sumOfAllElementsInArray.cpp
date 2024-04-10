#include <bits/stdc++.h>
using namespace std;

void sumOfElements(vector<int> &arr, int len)
{
    int sum = 0;
    for (int i = 0; i <len; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is: " << sum;
}

int main()
{
    vector<int> arr = {4, 2, 8, 6, 15, 5, 9, 20};
    int len = arr.size();
    sumOfElements(arr, len);    
    return 0;
}

// we can use STL accumulate:- 

// #include <bits/stdc++.h>
// using namespace std;

// void sumOfElements(vector<int> &arr, int len)
// {
//     int initialSum = 0;
// 	cout <<"The sum of the elements of the array is ";
// 	cout<<accumulate(arr.begin(), arr.end(), initialSum);
// }

// int main()
// {
//     vector<int> arr = {4, 2, 8, 6, 15, 5, 9, 20};
//     int len = arr.size();
//     sumOfElements(arr, len);    
//     return 0;
// }