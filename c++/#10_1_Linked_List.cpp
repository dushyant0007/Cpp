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

void printLinkdList(Node *ptr)
{

    while (ptr != NULL)
    {
        ptr = ptr->next;
        cout << ptr->data << endl;
        
    }
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

    // printLinkdList(head);



   // ---------DOUTE---------//   
    int a = 10;
    int &t = a;
    cout<<"&t = "<<&t<<cout;
    int* aPtr = &a; 
    cout<<"a -> "<<*aPtr<<endl;
    cout<<aPtr<<endl;
    cout<<&a<<endl;
    
    Node temp;
    Node *k = &temp;
    cout<<"Value Of k = "<<k->data<<endl;
    cout<<"&temp.data = "<<&temp.data<<endl;
    cout<<"*k->data ="<<(*k).data<<endl;// *k.data and *k->data Don't work



    return 0;
}