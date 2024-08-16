#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
Node* creatingLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while (temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteTail(Node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node* temp = head;
    while(temp -> next -> next != nullptr){
        temp = temp -> next;
    }
    delete temp -> next;
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int> nums = {1,5,4,8,9,7,6,4,7};
    Node* head = creatingLL(nums);
    printLL(head);
    head = deleteTail(head);
    printLL(head);
    return 0; 
}