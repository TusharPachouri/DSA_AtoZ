#include <iostream>
#include <string.h>
using namespace std;

string removeVowels(string str, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str = str.substr(0, i) + str.substr(i + 1);
        }
    }
    return str;
}

int main()
{
    string str = "Tushar pachouri";
    // cout << str.substr(0, 4);
    cout << "After aRemove all the vowels string look like: " << removeVowels(str, str.length()) << endl;

    return 0;
}