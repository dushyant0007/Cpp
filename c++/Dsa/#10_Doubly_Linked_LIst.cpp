#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value)
  {
    data = value;
    next = NULL;
    prev = NULL;
  }
};
void inE(Node *head, int value)
{
  Node *n = new Node(value);
  // while (head) // or
  while (head->next != NULL)
  {
    head = head->next;
  }
  head->next = n;
  n->prev = head;
  cout << "__--__" << endl;
  cout << head->data << endl;
  cout << "__--__" << endl;
};

void inF(Node *head, int value)
{
  Node *n = new Node(value);
  if (head->next == NULL)
  {
    n->next = head->next;
    head->next = n;
    n->prev = head;
  }
  else
  {
    n->next = head->next;
    head->next->prev = n;
    head->next = n;
    n->prev = head;
  }

  // n->next = head->next;
  // head->next->prev = n;
  // head->next = n;
  // n->prev = head;
}
void del(Node *head, int pos)
{
  if (pos == 1)
  {
    head->next = head->next->next;
    head->next->prev = head;
  }
  else
  {
    int count = 1;
    while (head->next != NULL && count <= pos)
    {
      head = head->next;
      count++;
    }
    if (head->next != NULL)
    {
      head->prev->next = head->next;
      head->next->prev = head->prev;
    }
    else
    {
      head->prev->next = NULL;
    }
  }
}
void print(Node *head)
{

  while (head->next != NULL)
  {
    head = head->next;
    cout << head->data << endl;
  }
  cout << "--$--" << endl;
  cout << head->data << endl;
  cout << "--$--" << endl;
}
int main()
{
  Node *head = new Node(0);
  inF(head, 21);
  inF(head, 922);
  inF(head, 1676);

  // print(head);
  cout << head->next->next->next->prev->data << endl;
  cout << "--" << endl;
  cout << head->data << endl;
  cout << "--" << endl;
}