#include <iostream>
using namespace std;

class ASCII{
    public:
        char c;
        void setChar(char ch){
            c = ch;
        }
        void getAscii(){
            cout << "Ascii Value of " << c << " is: " << int(c) << endl;
        }
};

int main(){
    ASCII obj1;
    obj1.setChar('A');
    obj1.getAscii();
    ASCII obj2;
    obj2.setChar('#');
    obj2.getAscii();
    ASCII obj3;
    obj3.setChar('Z');
    obj3.getAscii();
    return 0; 
}