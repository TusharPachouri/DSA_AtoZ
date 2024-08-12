#include <iostream>
using namespace std;

class Pattern
{
private:
    void Pattern07(int num)
    {
        for (int i = 1; i < num + 1; i++)
        {
            for (int j = num - i; j > 0; j--)
            {
                cout << " ";
            }
            for (int k = 1; k < i * 2; k++)
            {
                cout << "*";
            }
            for (int j = num - i; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
    void Pattern08(int num)
    {
        for (int i = num; i > 0; i--)
        {
            for (int j = num - i; j > 0; j--)
            {
                cout << " ";
            }
            for (int j = 1; j < 2 * i; j++)
            {
                cout << "*";
            }
            for (int j = num - i; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
    }

public:
    void Pattern09(int num)
    {
        Pattern07(num);
        Pattern08(num);
    }

};

int
main()
{
    // 
    int num;
    cin >> num;
    Pattern p1;
    p1.Pattern09(num);
    return 0;
}