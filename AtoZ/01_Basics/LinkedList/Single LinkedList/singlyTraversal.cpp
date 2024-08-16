#include <iostream>
#include <vector>
using namespace std;

// struct Node{ --> It doesn't provide us the concepts such as inheritance .. all as class does.
class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
    public:
        Node(int data){ // we can define multiple constructors as well. 
            this->data = data;
            this->next = nullptr;
        }
};
Node* convertArrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}
void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int lengthOfLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3,5,6};
    // Node y = Node(nums[0], nullptr);
    // cout << y.data << endl << y.next;
    // Node* y = new Node(nums[0]);
    // cout << y->data;
    // cout << y->next;
    Node* head = convertArrayToLL(nums);
    // cout << head->data;
    printLL(head);
     cout << endl << "Length is : " << lengthOfLL(head);

     //code
    // int x = 2;
    // int* y = &x;
    //  cout << *y; 


    return 0; 
}