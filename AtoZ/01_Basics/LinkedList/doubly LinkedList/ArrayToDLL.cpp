#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;
    public:
        Node(int data, Node* next, Node* back){
            this->data = data;
            this->next = next;
            this->back = back;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
            this->back = nullptr;
        }
};

void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* ArrayToDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

int main(){
    vector<int> arr = { 1, 5, 4, 8, 9, 7, 6, 4, 7};
    Node* head = ArrayToDLL(arr);
    printDLL(head);
    // cout << head->next->next->next->data;
    return 0; 
}