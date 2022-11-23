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
    // cout<<head->data<<endl;
}

void insertAfterNode(Node* insert , Node* insertAfter){

    insert->next = insertAfter->next;
    insertAfter->next = insert;

}


int main()
{

    // Node *head = new Node();
    // Node *one = new Node();
    // Node *two = new Node();
    // Node *three = new Node();

    // head->next = one;
    // one->next = two;
    // two->next = three;
    // three->next = NULL;

    // one->data = 111;
    // two->data = 222;
    // three->data = 333;

    // // insertAtHead(head,1920);
    // insertAtHead(head,47);
    // // cout<<head<<endl;
    // // cout<<head->data<<endl;
    // insertAtEnd(head,66);
    // // cout<<head->data<<endl;

    // Node *four = new Node();
    // four->data = 444;
    // insertAfterNode(four,three);

    // Node *five = new Node();
    // five->data = 555;
    // insertAfterNode(five,four);


    // printLinkedList(head);


    // // ---------Doubt---------//
    cout<<"=====-----==="<<endl;
    int a = 10;
    int &t = a;
    cout << "&t = " << &t << endl;
    cout << "&a = " << &a << endl;
    

    // int *aPtr = &a;
    // cout << "a -> " << *aPtr << endl;
    // cout << aPtr << endl;
    // cout << &a << endl;

    Node temp;
    Node *k = &temp;
    Node &x = temp;

    cout<<"----"<<endl;

    cout<<"x.data = "<<x.data<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"k->next = "<<k->next<<endl;
    cout<<"&x.next = "<<&x.next<<endl;
    cout<<"(&x)->data = "<<(&x)->data<<endl;

    cout<<"----"<<endl;

    cout << "Value Of k = " << k->data << endl;
    cout << "(&temp)->data = " << (&temp)->data << endl;
    cout << "&temp.data = " << &temp.data << endl;
    cout << "&temp = " << &temp << endl;
    cout << "temp.data = " << temp.data << endl;
    cout << "(*k).data =" << (*k).data << endl; // *k.data and *k->data Don't work
    cout << "k->data =" << k->data << endl; 

    return 0;
}