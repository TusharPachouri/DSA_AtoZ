#include <iostream>
#include <map>
using namespace std;
void replaceByFrequency(int arr[],int n){
    int 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        cout << "Before: "
        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        replaceByFrequency(arr,num);
        
    }
    return 0; 
}