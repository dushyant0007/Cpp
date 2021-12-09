#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};

void insertAfter(Node* insert, Node* insertAfter){

    Node* k = insertAfter->next;
    insertAfter->next = insert;
    insert->next = k;

}

void printLinkedList(Node* ptr){
    ptr = ptr->next;
    while (ptr!=NULL)
    {
    cout<<(ptr->data)<<endl;
    ptr = ptr->next;
    }
    
}

int main(){

    Node* head = new Node;

    Node* one = new Node;
    one->data = 12;
    insertAfter(one,head);

    Node* two = new Node;
    one->data = 334;
    insertAfter(two,one);

    Node* three = new Node;
    three->data = 456;
    insertAfter(three,two);


    printLinkedList(head);


}
