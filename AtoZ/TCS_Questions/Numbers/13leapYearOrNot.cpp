#include <bits/stdc++.h>
using namespace std;

void checkForLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Its a leap year";
        return;
    }
    cout << "Its not a leap year";
}

int main()
{
    int year;
    cout << 'Enter Year: ';
    cin >> year;
    cout << "year is: " << year << endl;
    checkForLeapYear(year);
    return 0;
}