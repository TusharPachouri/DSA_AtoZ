#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;
    int sum = ((end) * (end + 1)) / 2 - ((start - 1) * start) / 2;
    cout << "Sum of numbers starting from " << start << " till " << end << " is " << sum;
    return 0;
}