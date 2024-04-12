#include <bits/stdc++.h>
using namespace std;

int sumOfAPSeries(int a,int d,int n){
    int sum = 0;
    while(n>0){
        sum = a + sum;
        a = a + d;
        n = n - 1;
    }
    return sum;
}
float sumOfAPSeriesFormula(int a, int d, int n){
    float sum = (n/2)*(2*a +(n-1)*d);
    return sum;
}

int main()
{
    cout << sumOfAPSeries(-2,5,8) << endl;
    cout << sumOfAPSeriesFormula(-2,5,8);
    return 0;
}