#include <iostream>
using namespace std;
void findNumberOfV_C_S(string str, int num){
    int vowel =0, consonants = 0, spaces = 0;
    for(int i=0;i < num; i++){
        str[i] = towlower(str[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if(str[i] == ' '){
            spaces++;
        }else if (str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
        {
            vowel++;
        }else if (str[i] >= 'a' && str[i] <= 'z')
        {
            consonants++;
        }
    }
    cout << "Vowels: " << vowel << endl;
    cout << "spaces: " << spaces << endl;
    cout << "Consonants: " << consonants << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string str ;
        cin >> str;
        int len = str.length();
        findNumberOfV_C_S(str, len);
    } 
    return 0; 
}

//intput:-
//3
// ABCDCBA
// TAKEUFORWARD
// 505