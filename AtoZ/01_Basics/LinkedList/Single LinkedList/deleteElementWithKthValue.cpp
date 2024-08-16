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

Node* deleteKthElement(Node* head, int val){
    if(head == NULL) return head;
    Node* temp = head;
    if(head->data == val){
        head = head->next;
        delete temp;
    }
    Node* prev = NULL;
    while(temp->next != NULL ){
        if(temp->data == val){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> nums = {1,5,4,8,9,7,6,4,7};
    Node* head = creatingLL(nums);
    printLL(head);
    head = deleteKthElement(head,4);
    printLL(head);
    return 0; 
}