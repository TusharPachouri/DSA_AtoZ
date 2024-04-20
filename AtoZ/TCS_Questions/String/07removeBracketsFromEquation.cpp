#include <bits/stdc++.h>
using namespace std;
void removeBrackets(string str){
    string res = "";
    for(int i = 0; i < str.length(); i++){
        if( str[i] != '(' && str[i] != ')'){
            res.push_back(str[i]);
        }
    }
    cout << "Equation is: " << res << endl; 
}
int main(){
    string eq1= "a+(b+c-((c)/d*e))";
    removeBrackets(eq1);
    return 0; 
}