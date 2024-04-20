#include <iostream>
#include <string.h>
using namespace std;

void removeSpaces(string str)
{
    int count = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {                        // if whitespace is present
            str[count] = str[i]; // remove whitespace
            count++;             // increment the count
        }
    }
    str[count] = '\0';
    cout << "Without spaces sting is: " << str << endl;
}

int main()
{
    string str = "  T u   s  h  ar Pa ch o    uri";
    removeSpaces(str);
    return 0;
}