#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
Node *creatingLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *insertHead(Node *head, int el)
{
    Node *temp = new Node(el, head);
    return temp;
}

Node *insertTail(Node *head, int el)
{
    if (head == NULL)
    {
        return new Node(el);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(el);
    temp->next = newNode;
    return head;
}

Node *insertElementOnKthPlace(Node *head, int el, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(el);
        }else{
            return head;
        }
    }
    if(k == 1){
        Node* newHead = new Node(el, head);
        return newHead;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL )
    {
        cnt++;
        if(cnt == (k - 1)){
            Node* newNode = new Node(el, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> nums = {1, 5, 4, 8, 9, 7, 6, 4, 7};
    Node *head = creatingLL(nums);
    printLL(head);
    head = insertHead(head, 8);
    // head = insertTail(head, 16);
    head = insertElementOnKthPlace(head, 69, 3);
    printLL(head);
    return 0;
}