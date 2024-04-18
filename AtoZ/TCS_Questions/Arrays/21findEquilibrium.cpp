#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n)
{
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        int rightSum = 0;
        for (int j = i+1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }
        if(leftSum == rightSum){
            return i;
        }
        leftSum = leftSum + arr[i];
    }
    return -1;
}

int findEquilibriumOptimise(int arr[], int n){
    int leftSum = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int rightSum = sum;
    for (int i = 0; i < n; i++)
    {
        rightSum = rightSum - arr[i];
        if(rightSum == leftSum){
            return i;
        }
        leftSum = leftSum + arr[i];
    }
    return -1;
}

int main()
{
    int n = 3;
    int arr[] = {1,-1,4};
    int m = 5;
    int arr2[] = {2,3,-1,8,4};
    int equilibriumIndex = findEquilibrium(arr, n);
    int equilibriumIndexOptimize = findEquilibriumOptimise(arr2, m);
    cout << equilibriumIndex << endl;
    cout << equilibriumIndexOptimize << endl;
    return 0;
}