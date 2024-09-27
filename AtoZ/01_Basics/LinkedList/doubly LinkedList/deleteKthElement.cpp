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

 Node * deleteHead(Node* head) {
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        Node* temp = head;
        head = head->next;
        head->back = nullptr;
        delete temp;
        return head;
    }

Node* deleteTail(Node* head) {
        if(head == nullptr) return nullptr;
        if( head->next == nullptr) {
            delete head;
            return nullptr;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node* tail = temp->next;
        temp->next = nullptr;
        delete tail;
        return head;
    }

Node* deleteKthElement(Node* head, int k){
    if(head == NULL) return nullptr;
    if(head->next == NULL && k == 1) return nullptr;
    int cnt = 0;
    Node *temp = head;
    while(temp->next != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* next = temp->next;
    if(prev == NULL){
        return deleteHead(head);
    }else if(next == NULL){
        return deleteTail(head);
    }
    prev->next = next;
    next->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = { 1, 5, 4, 8, 9, 7, 6, 4, 7};
    Node* head = ArrayToDLL(arr);
    printDLL(head);
    head = deleteKthElement(head, 5);
    printDLL(head);
    // cout << head->next->next->next->data;
    return 0; 
}