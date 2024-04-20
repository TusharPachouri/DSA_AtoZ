#include <iostream>
using namespace std;

string removeDuplicate(string str, int num){

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << "After remove duplicate: " << removeDuplicate(str, str.size()) << endl;
    }
    return 0;
}