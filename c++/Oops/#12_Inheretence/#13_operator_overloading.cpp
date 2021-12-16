#include <iostream>
using namespace std;

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
  friend ostream &operator<<(ostream &cout, Point p);
};

ostream &operator<<(ostream &cout, Point p)
{
  cout << "x = " << p.x << endl;
  cout << "y = " << p.y << endl;
  return cout;
}

int main()
{
  Point p1(11, 16);
  cout << p1;
}
