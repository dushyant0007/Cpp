#include <iostream>
using namespace std;

// Binary (+) and (-)
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
  void print()
  {
    cout << "a = " << a << ", b = " << b << endl;
  };
  A operator+(A t)
  {
    A *temp = new A;
    // (*temp).a = a + t.a;
    temp->a = a + t.a;
    (*temp).b = b + t.b;
    return *temp;
  }
  A operator-(A t)
  {
    A *temp = new A;
    (*temp).a = a - t.a;
    (*temp).b = b - t.b;
    return *temp;
  }
};

// Unary Operator Overloading
class Point
{
private:
  int x;
  int y;

public:
  Point()
  {
    x = 0;
    y = 0;
  }
  Point(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  Point operator-()
  {
    Point p;
    p.x = -x;
    p.y = -y;
    return p;
  }

  void print()
  {
    cout << "x = " << x << ", y = " << y << endl;
  }

  // Post increment operator
  void operator++()
  {
    x++;
    y++;
  }

  // pre increment operator
  void operator++(int)
  {
    ++x;
    ++y;
  }
};

int main()
{
  A one(1, 4);
  A two(3, 6);
  A c;
  c = one + two; // c = one.add(two)
  c.print();
  cout<<"-----------------------"<<endl;


  A d;
  d = two - one;
  d.print();
  cout<<"-----------------------"<<endl;


  Point p1(12, 8);
  Point p2;
  p2 = -p1;
  p2.print();
  cout<<"-----------------------"<<endl;


  Point pp(3,7);
  pp++;
  pp.print();
  cout<<"-----------------------"<<endl;

  Point tp(1,5);
  ++tp;
  tp.print();
  cout<<"-----------------------"<<endl;


}