#include <iostream>
using namespace std;

template <typename T>
T functionName(T parameter1, T parameter2) {
    // code
}

template <typename T,typename T1>
T functionName1(T parameter1, T1 parameter2) {
    // code
    cout<<parameter1<<"__--__"<<parameter2<<endl;
    return parameter1;
}

template <typename T>
class A
{
private:
  T x;

public:
  void setData(T x)
  {
    this->x = x;
  }
  void printData()
  {
    cout << x << endl;
  }
};

template <typename T, typename U>
class B
{
private:
  T x;
  U y;

public:
  void setData(T x, U y)
  {
    this->x = x;
    this->y = y;
  }
  void printData()
  {
    cout << "x = " << x << ", y = " << y << endl;
  }
};

int main()
{

  int a = 19;
  string b = "HEloot";
  functionName1<int , string>(a,b);
  functionName1(b,a);
  
  cout << "-----------------" << endl;

  A<string> a1;
  a1.setData("Dog");
  a1.printData();

  cout << "-----------------" << endl;

  A<int> a2;
  a2.setData(2020);
  a2.printData();

  cout << "-----------------" << endl;

  B<int, string> b1;
  b1.setData(323, "Cat");
  b1.printData();

  cout << "-----------------" << endl;
}