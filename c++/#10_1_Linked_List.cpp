#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

void printLinkedList(Node *ptr)
{
    
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cout << ptr->data << endl;
    }
}

void insertAtHead(Node* head , int value){

    // cout<<head<<endl;
    // head->data = 2090;

    Node *n = new Node();
    n->data = value;
    n->next = head->next;
    head->next = n;
}

void insertAtEnd(Node* head , int value){

    while (head->next != NULL)
    {
       head = head->next;
    }
    Node *n = new Node;
    n->data = value;
    head->next = n;

}

int main()
{

    Node *head = new Node();
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    one->data = 111;
    two->data = 222;
    three->data = 333;

    // insertAtHead(head,1920);
    insertAtHead(head,47);
    // cout<<head<<endl;
    // cout<<head->data<<endl;
    insertAtEnd(head,66);
    cout<<head->data<<endl;

    printLinkedList(head);


   
    return 0;
}
