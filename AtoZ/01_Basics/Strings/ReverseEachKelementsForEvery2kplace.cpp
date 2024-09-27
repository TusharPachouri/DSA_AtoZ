class Solution {
private:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    bool isStringAllVowel(string s){
        string str = "aeiou";
        for(char ch: str){
            if(s.find(ch) == string::npos){
                return false;
            }
        }
        return true;
    }
public:
    int countVowelSubstrings(string word) {
        int count = 0;
        for(int i = 0; i < word.size(); i++){
            if(isVowel(word[i]) && ((i+5)<word.size())){
                if(isStringAllVowel(word.substr(i, i+5))){
                    count++;
                }
            }
        }
        return count;
    }
};