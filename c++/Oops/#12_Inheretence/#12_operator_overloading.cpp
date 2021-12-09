#include <iostream>
using namespace std;

class A
{

private:
  int a;
  int b;

public:
  A()
  {
    a = 0;
    b = 0;
  }
  A(int a, int b)
  {
    this->a = a;
    this->b = b;
  }

  void print (){
    cout<<"a = "<<a<<", b = "<<b<< endl;
  };

  A operator+(A &t)
  {
    A *temp = new A;
    (*temp).a = a + t.a;
    (*temp).b = b + t.b;
    return *temp;
  }
};

int main()
{

  A one(1, 4);
  A two(3, 6);
  A c;
  c = one+two; // c = one.add(two)

  c.print();

}