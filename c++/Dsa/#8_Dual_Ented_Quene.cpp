#include <iostream>
using namespace std;

class Queue
{
  int front;
  int rear;
  int x;
  int arr[];

public:
  Queue(int x)
  {
    front = -1;
    rear = -1;
    this->x = x;
    arr[x];
    for (int i = 0; i < x; i++)
    {
      arr[i] = 0;
    }
  }
  void print()
  {
    // cout<<sizeof(arr[x])<<endl;
    for (int i = 0; i < x; i++)
    {
      cout << "Index " << i << " = " << arr[i] << endl;
    }

    
  }
  bool isEmpty()
  {
    if (front == -1 || rear == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool isFull()
  {
    if (rear == (x - 1))
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void inF(int value)
  {
    if (front == -1)
    {
      rear = 0;
      front = 0;
      arr[0] = value;
    }
    else if (isFull())
    {
      cout << "Queue is Full" << endl;
    }
    else
    {
      rear += 1;
      for (int i = 0; i < x; i++)
      {
        arr[x - i - 1] = arr[x - i - 2];
      }
      arr[0] = value;
    }
  }

  void inE(int value)
  {
    if (isFull())
    {
      cout << "Queue is Full" << endl;
    }
    else
    {
      rear += 1;
      arr[rear] = value;
    }
  }
  void delF()
  {
    if (isEmpty())
    {
      cout << "Queue is Empty" << endl;
    }
    else
    {
      for (int i = 0; i < x - 1; i++)
      {
        arr[i] = arr[i + 1];
      }
      rear -= 1;
    }
  }
};

int main()
{
  Queue a(3);
  a.print();
  // cout << a.isEmpty() << endl;
  // a.inF(1);
  // a.inF(12);
  // a.inF(9);
  // a.inF(11);
  // a.print();
}