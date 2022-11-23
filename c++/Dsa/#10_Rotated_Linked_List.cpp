#include <iostream>
using namespace std;

class node
{
public:
  int value;
  node *next;

node()
  {
    value = NULL;
    next = NULL;
  }  
  node(int value)
  {
    this->value = value;
    next = NULL;
  }  
};

class cll
{

public:
  int count = 0;
  node *head;
  cll()
  {
    head = new node();
  }
  void inE(int value)
  {
    count++;
    node *temp = new node(value);
    if (head->next != NULL)
    {
      node*ptr = head;
      while (ptr->next!=head)
      {
        ptr = ptr->next;
      }
      ptr->next = temp;
      temp->next = head;
    }
    else
    {
      head->next = temp;
      temp->next = head;   
    }
  }
  void inF(int value)
  {
     count++;
    node *temp = new node(value);
    if (head->next!=NULL)
    {
       temp->next = head->next;
       head->next = temp;
    }else{
      head->next = temp;
      temp->next = head;
    }  
  }
  void print()
  {
    node *x = new node();
      x = head;
    for (int i = 0; i < count; i++)
    {    
      x = x->next;
      cout << x->value << endl;
    }
  }
  void del(int index)
  {
    node*x = head;
    if (index == 0)
    {
     head->next = head->next->next;   
    }
    else{
    for (int i = 0; i < index; i++)
    {
      x = x->next;
    }
    x->next = x->next->next;  
  }
    }
};

int main()           
{
  cll *a = new cll();
  a->inE(12);
  a->inE(20);
  a->inE(10);
  a->inE(101);
  a->inF(721);
  a->print();
  a->del(1);
  a->del(0);
  cout<<"##$#$"<<endl;
  a->print();
  cout<<"$$#$"<<endl;
  cout << a->head->value << endl;
  cout << a->head->next->value << endl;
  cout << a->head->next->next->value << endl;
  cout << a->head->next->next->next->value << endl;
  cout << a->head->next->next->next->next->value << endl;
  cout << a->head->next->next->next->next->next->next->value << endl;
  cout << a->head->next->next->next->next->next->next->next->value << endl;
}